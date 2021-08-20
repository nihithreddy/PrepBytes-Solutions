#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(int N){
  ll fact = 1LL;
  for(int i=2;i<=N;i++) fact*=i;
  return fact;
}
ll NCR(int N,int R){
  ll fact = 1LL;
  for(int i=2;i<=N;i++) fact*=i;
  for(int i=2;i<=R;i++) fact/=i;
  for(int i=2;i<=N-R;i++) fact/=i;
  return fact;
}
int main()
{
   int T,M,W,X,Y;
   cin>>T;
   while(T--){
     cin>>M>>W>>X>>Y;
     cout<<NCR(M,X)*NCR(W,Y)*f(X+Y)<<"\n";
   }
  
  return 0;
}
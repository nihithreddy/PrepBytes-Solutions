#include <bits/stdc++.h>
using namespace std;
void print1(int p,int n){
  cout<<p<<" ";
  if(p==n) return;
  else print1(p+5,n);
}
void print(int p,int n){
   if(p<=0){
     print1(p,n);
     return;
   }
   cout<<p<<" ";
   print(p-5,n);
}
int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    print(n,n);
    cout<<endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int gcd(int n,int m){
  if(m==0) return n;
  else return gcd(m,n%m);
}
int main()
{
  int t,n,m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    cout<<gcd(n,m)<<"\n";
  }
  
  return 0;
}
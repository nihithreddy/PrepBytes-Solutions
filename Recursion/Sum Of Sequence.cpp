#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod =(int)1e9+7;
int solve(int n){
    if(n==1) return 1;
    if(n%2==0) return (n%mod)+(solve(n/2)%mod);
    else return (n%mod)+(solve(3*n+1)%mod);
}
int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    cout<<solve(n)<<"\n";
  }
  
  return 0;
}
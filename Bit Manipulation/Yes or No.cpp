#include <bits/stdc++.h>
using namespace std;
int arr[15],n;
bool solve(int idx,int sum){
  if(idx==n){
    //cout<<sum<<"\n";
    if(sum%360==0) return true;
    else return false;
  }
  return solve(idx+1,sum+arr[idx])||solve(idx+1,sum-arr[idx]);
}
int main()
{
   cin>>n;
   for(int i=0;i<n;i++) cin>>arr[i];
   bool yes = solve(0,0);
   if(yes) cout<<"YES\n";
   else cout<<"NO\n";
  return 0;
}
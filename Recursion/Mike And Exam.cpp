#include <bits/stdc++.h>
using namespace std;

int t,n,k,ans,a[10];
vector<int> nums;
void solve(int idx,int sum){
  if(sum==k){
    //for(auto nu:nums) cout<<nu<<" ";
   // cout<<endl;
    ans++;
    return;
  }
  if(idx==n) return;
  nums.push_back(a[idx]);
  solve(idx+1,sum+a[idx]);
  nums.pop_back();
  nums.push_back(-a[idx]);
  solve(idx+1,sum-a[idx]);
  nums.pop_back();
  solve(idx+1,sum);
}
int main()
{
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    solve(0,0);
    cout<<ans<<endl;
    nums.clear();
    ans=0;
  }
  
  return 0;
}
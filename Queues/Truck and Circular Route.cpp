#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
  int n;
  cin>>n;
  int gas[n],cost[n];
  for(int i=0;i<n;i++) cin>>gas[i];
  for(int i=0;i<n;i++) cin>>cost[i];
  int ans = -1;
  for(int i=0;i<n;i++){
    if(gas[i]>=cost[i]){
      ll cur_gas = gas[i] - cost[i];
      int start = i,cur = (i+1)%n;
      while(cur!=start && cur_gas+gas[cur]>=cost[cur]){
        cur_gas += gas[cur]-cost[cur];
        cur = (cur+1)%n;
      }
      if(cur == start){
        ans = i;
        break;
      }
    }
  }
  cout<<ans<<"\n";
}

int main()
{
  solve();
  return 0;
}
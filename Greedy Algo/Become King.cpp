#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int i=0;i<n;i++){
    pq.push(a[i]);
  }
  int ans = 0;
  if(pq.size() == 1){
    cout<<pq.top()<<"\n";
    return;
  }
  while(pq.size()>1){
     int a = pq.top();pq.pop();
     int b = pq.top();pq.pop();
     ans+= a+b;
     pq.push(a+b);
  }
  cout<<ans<<"\n";
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  deque<int> dq;
  for(int i=0;i<k;i++){
    while(!dq.empty() && a[dq.back()]<=a[i]) dq.pop_back();
    dq.push_back(i);
  }
  for(int i=k;i<n;i++){
    cout<<a[dq.front()]<<" ";
    while(!dq.empty() && dq.front()<=i-k) dq.pop_front();
    while(!dq.empty() && a[dq.back()]<=a[i]) dq.pop_back();
    dq.push_back(i);
  }
  cout<<a[dq.front()]<<" ";
}

int main()
{
  solve();
  return 0;
}
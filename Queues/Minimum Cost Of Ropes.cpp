#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  int n;
  ll d;
  cin>>n;
  priority_queue<ll,vector<ll>,greater<ll>> pq;
  for(int i=0;i<n;i++){
    cin>>d;
    pq.push(d);
  }
  ll cost = 0LL;
  while(pq.size()>1){
    ll a = pq.top();pq.pop();
    ll b = pq.top();pq.pop();
    pq.push(a+b);
    cost+= a+b;
  }
  cout<<cost<<endl;
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
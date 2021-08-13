#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
const int MAX = 1005;
vector<int> g[MAX];
int vis[MAX];

void solve(){
  int n,m,u,v,x,y;
  cin>>n>>m;
  while(m--){
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  cin>>x>>y;
  queue<pi> q;
  q.push({x,0});
  while(!q.empty()){
    pi f = q.front();q.pop();
    vis[f.first] = 1;
    if(f.first == y){
      cout<<f.second<<endl;
      break;
    }
    for(int c:g[f.first]){
      if(!vis[c]){
        q.push({c,f.second+1});
      }
    }
  }
  memset(vis,0,sizeof(vis));
  for(int i=0;i<MAX;i++) g[i].clear();
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
#include <bits/stdc++.h>
using namespace std;
int R,C,g[1005][1005],vis[1005][1005];

void dfs(int r,int c){
   if(vis[r][c] || g[r][c]==0) return;
   vis[r][c] = 1;
   if(r-1>=0) dfs(r-1,c);
   if(r+1<R) dfs(r+1,c);
   if(c-1>=0) dfs(r,c-1);
   if(c+1<C) dfs(r,c+1);
}

void solve(){
  cin>>R>>C;
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++) cin>>g[i][j];
  }
  int ans = 0;
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      if(g[i][j] == 1 && !vis[i][j]){
         ans++;
         dfs(i,j);
      }
    }
  }
  cout<<ans<<endl;
  
}

int main()
{
  int t=1;
  while(t--){
    solve();
  }
  
  return 0;
}
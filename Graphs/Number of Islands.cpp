#include <bits/stdc++.h>
using namespace std;
int R,C,g[1005][1005],vis[1005][1005];
const int dx[] ={-1,1,0,0,-1,1,-1,1};
const int dy[]={0,0,-1,1,1,-1,-1,1};

bool isSafe(int r,int c){
  return (r>=0&&r<R&&c>=0&&c<C);
}

void dfs(int r,int c){
   if(vis[r][c] || g[r][c]==0) return;
   vis[r][c] = 1;
   for(int k=0;k<8;k++){
     int r1 = r+dx[k],c1=c+dy[k];
     if(isSafe(r1,c1)){
       dfs(r1,c1);
     }
   }
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
  memset(g,0,sizeof(g));
  memset(vis,0,sizeof(vis));
  
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
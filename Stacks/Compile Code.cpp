#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   string s;
   cin>>n>>s;
   int ans = 0,open=0,close=0;
   for(char c:s){
    if(close>open) break;
    if(c=='<') open++;
    if(c=='>') close++;
    ans=open==close?2*open:ans;
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
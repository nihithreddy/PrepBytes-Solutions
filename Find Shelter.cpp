#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int p[n],s[n];
  for(int i=0;i<n;i++) cin>>p[i];
  for(int i=0;i<n;i++) cin>>s[i];
  sort(p,p+n);
  sort(s,s+n);
  int ans = 0;
  for(int i=0;i<n;i++) ans = max(ans,abs(s[i]-p[i]));
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

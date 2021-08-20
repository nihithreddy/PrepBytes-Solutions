#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  vector<vector<int>> cnt(26,vector<int>(n,0));
  for(int i=0;i<n;i++) cnt[s[i]-'a'][i] = 1;
  for(int i=0;i<26;i++){
    for(int j=1;j<n;j++) cnt[i][j]+=cnt[i][j-1];
  }
  while(q--){
    char c;
    int x;
    cin>>c>>x;
    int lb = lower_bound(cnt[c-'a'].begin(),cnt[c-'a'].end(),x) - cnt[c-'a'].begin(); ;
    int ub = upper_bound(cnt[c-'a'].begin(),cnt[c-'a'].end(),x)- cnt[c-'a'].begin();
    cout<<lb+1<<" "<<ub<<endl;
  }
  
  return 0;
}
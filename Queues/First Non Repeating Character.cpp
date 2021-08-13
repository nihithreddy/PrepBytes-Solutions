#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  string s;
  cin>>n>>s;
  pair<int,int> p[26];
  for(int i=0;i<26;i++){
    p[i].first = 0;
    p[i].second = -1;
  }
  for(int i=0;i<n;i++){
    char ch = s[i]-'a';
    p[ch].first++;
    p[ch].second = i;
  }
  int index = n;
  for(int i=0;i<26;i++){
    if(p[i].first == 1){
      index = min(index,p[i].second);
    }
  }
  (index==n?cout<<-1:cout<<s[index]);
  cout<<endl;
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
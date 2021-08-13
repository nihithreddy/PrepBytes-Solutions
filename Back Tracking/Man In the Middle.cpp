#include <bits/stdc++.h>
using namespace std;

set<string> st;
string s;


void go(int idx){
  if(idx == s.length()){
    st.insert(s);
    return;
  }
  if(isdigit(s[idx])){
    go(idx+1);
  }
  else if(isupper(s[idx])){
    s[idx] = tolower(s[idx]);
    go(idx+1);
    s[idx] = toupper(s[idx]);
    go(idx+1);
  }
  else{
    s[idx] = toupper(s[idx]);
    go(idx+1);
    s[idx] = tolower(s[idx]);
    go(idx+1);
  }
}

void solve(){
  cin>>s;
  go(0);
  for(auto &y : st) cout<<y<<"\n";
}

int main()
{
  solve();
  return 0;
}
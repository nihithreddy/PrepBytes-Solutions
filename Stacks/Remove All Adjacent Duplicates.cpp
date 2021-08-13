#include <bits/stdc++.h>
using namespace std;
void solve(){
  string str;
  cin>>str;
  stack<char> st;
  for(char c:str){
    if(st.empty() || st.top() != c){
      st.push(c);
    }
    else{
      st.pop();
    }
  }
  string ans = "";
  while(!st.empty()){
    ans+=st.top();
    st.pop();
  }
  reverse(ans.begin(),ans.end());
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
#include <bits/stdc++.h>
using namespace std;
void solve(){
  string str;
  cin>>str;
  stack<char> st;
  for(char ch:str){
    if(ch=='('|| ch=='['||ch=='{'){
      st.push(ch);
    }
    else if(st.empty()){
      cout<<"Not Valid";
      return;
    }
    else{
      char top = st.top();
      if((top=='('&&ch==')') || (top=='['&&ch==']') || (top=='{' && ch=='}')){
        st.pop();
      }
      else{
        break;
      }
    }
  }
  if(st.empty()) cout<<"Valid"; else cout<<"Not Valid";
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    solve();
    cout<<endl;
  }
  
  return 0;
}
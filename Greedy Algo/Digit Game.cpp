#include <bits/stdc++.h>
using namespace std;

void solve(){
  int m;
  string str;
  cin>>str>>m;
  while(m--){
     string cur = "";
     for(int i=0;i<str.length();i++){
       string temp = str.substr(0,i)+str.substr(i+1);
       //cout<<temp<<endl;
       cur = max(cur,temp);
     }
     str = cur;
  }
  cout<<str<<"\n";
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

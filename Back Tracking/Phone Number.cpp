#include <bits/stdc++.h>
using namespace std;

char dict[][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void go(string str,char * res,int idx){
  if(idx == str.length()){
    res[idx] = '\0';
    cout<<res<<" ";
    return;
  }
  if(str[idx]=='0' || str[idx]=='1'){
    res[idx] = ' ';
    go(str,res,idx+1);
  }
  int cur_pos = str[idx]-'0';
  for(int k = 0;k<strlen(dict[cur_pos]);k++){
    res[idx] = dict[cur_pos][k];
    go(str,res,idx+1);
  }
}

void solve(){
  string str;
  cin>>str;
  int n = str.length();
  char res[n+1];
  go(str,res,0);
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
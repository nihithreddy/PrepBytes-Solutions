#include <bits/stdc++.h>
using namespace std;
int solve(string s,int idx){
  if(idx==(int)s.size()){
    return -1;
  }
  if(s[idx]>='A'&&s[idx]<='Z'){
    return idx;
  }
  else{
    return solve(s,idx+1);
  }
}
int main()
{
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    cout<<solve(s,0)<<"\n";
  }
  return 0;
}
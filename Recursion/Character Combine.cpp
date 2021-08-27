#include <bits/stdc++.h>
using namespace std;
char c,d;
int t,k;
vector<string> vs;
void print(int idx,string s){
    if(idx==k){
      vs.push_back(s);
      return;
    }
    print(idx+1,s+c);
    if(idx==0||s[idx-1]!=d){
      print(idx+1,s+d);
    }
}
int main()
{
  cin>>t;
  while(t--){
    cin>>c>>d>>k;
    print(0,"");
    sort(vs.begin(),vs.end());
    for(string s:vs) cout<<s<<endl;
    vs.clear();
  }
  return 0;
}
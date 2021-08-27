#include <bits/stdc++.h>
using namespace std;
string s;
vector<string> vs;
int main()
{
  cin>>s;
  int n = (int)s.size();
  sort(s.begin(),s.end());
  for(int i=1;i<(1<<n);i++){
    string t="";
    for(int j=0;j<n;j++){
      if(i&(1<<j)){
        t+=s[j];
      }
    }
    vs.push_back(t);
  }
  sort(vs.begin(),vs.end());
  for(string str:vs) cout<<str<<"\n";
  
  return 0;
}
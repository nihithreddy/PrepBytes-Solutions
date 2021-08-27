#include <bits/stdc++.h>
using namespace std;

int t,ans;
string s1,s2;
void recurse(int i,int j,int n,int m){
  if(i==n||j==m){
    ans++;
    return;
  }
  else {
    recurse(i+1,j,n,m);
    recurse(i,j+1,n,m);
  }
}
int main()
{
  cin>>t;
  while(t--){
    cin>>s1>>s2;
    recurse(0,0,(int)s1.size(),(int)s2.size());
    cout<<ans<<"\n";
    ans=0;
  }
  
  return 0;
}
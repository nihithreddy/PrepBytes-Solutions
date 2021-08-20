#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,a,b;
  cin>>t;
  while(t--){
    cin>>a>>b;
    int ans=0;
    while(!(a==0||b==0)){
      if(a>b){
        int q=a/b;
        ans+=q;
        a-=q*b;
      }
      else{
        int q=b/a;
        ans+=q;
        b-=q*a;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}
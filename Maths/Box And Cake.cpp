#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin>>t;
  while(t--){
    ll t1,p,q,r;
    cin>>t1>>p>>q>>r;
    if(t1%p == 0 || t1%q==0 || t1%r==0) cout<<0;
    else{
      ll ans = p - t1%p;
      ans = min(ans,q - t1%q);
      ans = min(ans,r - t1%r);
      cout<<ans;
    }
    cout<<endl;
    
  }
  
  return 0;
}
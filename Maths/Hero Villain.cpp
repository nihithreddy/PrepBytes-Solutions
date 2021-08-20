#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> a(n); 
    int gcd=0;
    for(int i=0;i<n;++i){
      cin>>a[i];
      gcd=__gcd(gcd,a[i]);
    }
    int ans=1;
    for(int k=2;k<=gcd;k++){
      bool f = 1;
      for(int i=0;i<n;i++){
        if(a[i]%k!=0){
          f=0;
          break;
        }
      }
      if(f) ans++;
    }
    cout<<ans<<"\n";
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int f=1;
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        f=0;
        break;
      }
    }
    if(f) cout<<"Yes\n";
    else cout<<"No\n";
  }
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int d = INT_MAX;
    for(int i=1;i<n;i++) d = min(d,a[i]-a[i-1]);
    int res = -1;
    for(int i = 0;i<n-1;i++){
      if(a[i]+d != a[i+1]){
        res = a[i]+d;
        break;
      }
    }
    if(res == -1) res = a[n-1]+d;
    cout<<res<<endl;
  }
  
  return 0;
}
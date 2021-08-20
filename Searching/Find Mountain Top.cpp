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
    int l=0,r=n-1,ans=-1;
    while(l<=r){
      int m = (l+r)/2;
      if(m-1>=0 && m+1<n && a[m]>a[m-1] && a[m]>a[m+1]){
        ans = a[m];
        break;
      }
      else if(m-1>=0 && a[m] < a[m-1]){
        r = m-1;
      }
      else if(m+1<n && a[m] > a[m+1]){
        l = m+1;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
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
    int left=0,right=n-1,f=-1;
    while(left<=right){
      int mid = (left+right)>>1;
      if(a[mid]==1){
        f=mid;
        right=mid-1;
      }
      else{
        left = mid+1;
      }
    }
   cout<<f<<"\n";
  }
  
  return 0;
}
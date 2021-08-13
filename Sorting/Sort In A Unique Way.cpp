#include <bits/stdc++.h>
using namespace std;
int mergeSort(int *a,int l,int r){
  if(r-l == 1) return 1;
  int m = (l+r)/2;
  int left = mergeSort(a,l,m);
  int right = mergeSort(a,m,r);
  if(left+right == (r-l) && a[m-1]<=a[m]) return left+right;
  return max(left,right);
}
void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  cout<<mergeSort(a,0,n)<<endl;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  
  return 0;
}
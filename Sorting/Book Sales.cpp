#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  int cost = 0;
  for(int i=0;i<m;i++){
    if(a[i]>0) break;
    cost+=a[i];
  }
  cout<<abs(cost)<<endl;
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
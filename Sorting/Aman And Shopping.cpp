#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  int sum = 0,cnt=0,i=0;
  while(sum < x && i<n){
    if(sum + a[i] > x) break;
    sum += a[i];
    cnt++;
    int j = i+1;
    while(j<n && a[i] == a[j]) j++;
    i = j-1;
    i++;
  }
  cout<<cnt<<"\n";
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
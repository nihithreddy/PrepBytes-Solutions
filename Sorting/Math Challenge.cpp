#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  //write your code here
  int n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  ll ans = (int)1e18;
  for(int i=0;i<n-1;i++) ans = min(ans,a[i+1]-a[i]);
  cout<<ans<<"\n";
  
  return 0;
}
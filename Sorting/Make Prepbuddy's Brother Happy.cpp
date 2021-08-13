#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  ll sum = 0LL;
  for(int i=n-k;i<n;i++) sum+=a[i];
  cout<<sum<<"\n";
}

int main()
{
  solve();
  
  return 0;
}
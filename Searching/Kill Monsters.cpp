#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll* a,int n,int k){
  ll cnt=0;
  for(int i=0;i<n;i++){
    cnt += k/a[i];
  }
  return cnt;
}
int main()
{
  int n,m,ans;
  cin>>n>>m;
  ll a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  ll l = 1;
  ll h = *min_element(a,a+n)*m;
  //cout<<l<<" "<<h<<endl;
  while(l<=h){
    ll mid = (l+h)/2;
    ll t = solve(a,n,mid);
    //cout<<mid<<" "<<t<<endl;
    if(t>=m){
      ans = mid;
      h = mid-1;
    }
    else{
      l = mid+1;
    }
  }
  cout<<ans<<endl;
  return 0;
}
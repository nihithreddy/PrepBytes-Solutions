#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
  int n,k;
  cin>>n>>k;
  int a[n],b[n];
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  ll sumA=0,sumB=0;
  sort(a,a+n);
  sort(b,b+n);
  for(int i=0;i<k;i++){
    sumA+=a[i];
    sumB+=b[n-i-1];
  }
  //cout<<sumA<<" "<<sumB<<endl;
  (sumA> sumB?cout<<"WIN\n":cout<<"LOSE\n");
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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin>>t;
  while(t--){
    ll num,k;
    cin>>num>>k;
    if(num%k == 0) cout<<0;
    else{
      ll q = num/k;
      cout<<min(min(num-q*k,k*(q+1) - num),num);
    }
    cout<<"\n";
  }
  
  return 0;
}
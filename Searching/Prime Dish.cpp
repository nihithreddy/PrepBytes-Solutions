#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e7;
int prime[MAX];
set<int> primes;

void sieve(){
  memset(prime,1,sizeof(prime));
  prime[0]=prime[1]=0;
  for(int i=2;i<MAX;i++){
    if(prime[i]){
      for(long long j=(long long)i*i;j<MAX;j+=2*i) prime[j]=0;
    }
  }
  primes.insert(2);
  for(int i=3;i<MAX;i+=2){
    if(prime[i]) primes.insert(i);
  }
  
}

void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  pair<int,int> p[n];
  for(int i=0;i<n;i++){
    if(primes.find(a[i]) == primes.end()){
      int ub = *primes.upper_bound(a[i]);
      p[i]={ub-a[i],i+1};
    }
    else{
      p[i] = {0,i+1};
    }
  }
  sort(p,p+n);
  for(int i=0;i<n;i++) cout<<p[i].second<<" ";
  cout<<endl;
}

int main()
{
  int t;
  cin>>t;
  sieve();
  while(t--){
    solve();
  }

  return 0;
}
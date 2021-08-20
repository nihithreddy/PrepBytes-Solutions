#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = (int)1e5+1;
set<int> p;
void sieve(){
  int primes[MAX];
  memset(primes,1,sizeof(primes));
  primes[0]=primes[1]=0;
  for(int i=2;i<MAX;i++){
    if(primes[i]){
      for(ll j=(ll)i*i;j<MAX;j+=2*i)primes[j]=0;
    }
  }
  p.insert(2);
  for(int i=3;i<MAX;i+=2){
    if(primes[i]){
      if(i==3||i==5||i==7) continue;
      int temp =i;
      bool f = 1;
      while(temp){
           int d = temp%10;
           if(d==3||d==5||d==7){
             f=0;
             break;
           }
           temp/=10;
      }
      if(f) p.insert(i);
    }
  }
}
int main()
{
  sieve();
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int sum =0;
    for(int i:p){
      if(n==0) break;
      sum+=i;
      n--;
    }
    cout<<sum<<"\n";
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,d,k;
  cin>>n;
  map<int,int> mp;
  for(int i=0;i<n;i++){
     cin>>d;
     mp[d]++;
  }
  cin>>k;
  for(auto p:mp){
    if(p.second == k){
      cout<<p.first;
      break;
    }
  }
  
  return 0;
}
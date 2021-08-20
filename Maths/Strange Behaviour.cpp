#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
     ll num;
     cin>>num;
     ll sq = sqrt(num);
     if(sq*sq == num){
       cout<<num+1;
     }
     else{
       cout<<(sq+1)*(sq+1);
     }
     cout<<endl;
  }
  
  return 0;
}
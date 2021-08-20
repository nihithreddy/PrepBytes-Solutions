#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int num,k;
    cin>>num>>k;
    while(k && num){
      if(num%10 != 0){
        num-=1;
      }
      else{
        num/=10;
      }
      k--;
    }
    cout<<num<<"\n";
  }
  
  return 0;
}
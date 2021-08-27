#include <bits/stdc++.h>
using namespace std;

void print(int cur,int n){
  if(cur>n) return;
  cout<<cur<<" ";
  print(cur+2,n);
}
int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    print(2,n);
    cout<<endl;
  }
  
  return 0;
}
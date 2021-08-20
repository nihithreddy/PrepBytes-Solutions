#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int Xor = 0;
    for(int i=0;i<n;i++) Xor^=arr[i];
    cout<<Xor<<"\n";
  }
  return 0;
}
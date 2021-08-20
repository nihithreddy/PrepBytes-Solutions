#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int maj_index=0,count=1;
    for(int i=1;i<n;i++){
      if(a[maj_index] == a[i]) count++;
      else count--;
      if(count == 0){
        maj_index = i;
        count = 1;
      }
    }
    int m = 0;
    for(int i=0;i<n;i++){
      if(a[i] == a[maj_index]){
         m++;
      }
    }
    if(m>n/2) cout<<a[maj_index]; else cout<<-1;
    cout<<endl;
  }
  
  return 0;
}
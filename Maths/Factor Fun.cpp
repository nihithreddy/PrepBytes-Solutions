#include <bits/stdc++.h>
using namespace std;
const int MAX = (int)1e6+5;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int f[MAX]={0};
  for(int i=0;i<n;i++){
    int c = 0;
    for(int j=1;j<=sqrt(a[i]);j++){
      if(a[i]%j==0){
        if(j*j==a[i]){
          c+=f[j];
        }
        else{
          c+=f[j];
          c+=f[a[i]/j];
        }
      }
    }
    f[a[i]]+=1;
    cout<<c<<" ";
  }
  
  return 0;
}
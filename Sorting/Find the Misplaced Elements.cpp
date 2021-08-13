#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--){
   int n;
   cin>>n;
   int a[n],b[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
     b[i] = a[i];
   }
   sort(a,a+n);
   int ans = 0;
   for(int i=0;i<n;i++){
     ans += (a[i]!=b[i]);
   }
   cout<<ans<<"\n";
}
  return 0;
}
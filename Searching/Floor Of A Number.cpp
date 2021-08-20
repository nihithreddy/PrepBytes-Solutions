#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t,n,x,f;
 cin>>t;
 while(t--){
   cin>>n>>x;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int lb = lower_bound(a,a+n,x) - a;
   while(lb>=0 && a[lb]>x) lb--;
   cout<<lb<<endl;
   
 }
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  int n = s.length();
  int st[n+1]={0},top=-1;
  for(int i=0;i<=n;i++){
     st[++top] = (i+1);
     if(i==n || s[i]=='I'){
       while(top>=0){
         cout<<st[top];
         top--;
       }
     }
  }
  cout<<endl;
  
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;


set<vector<int>> res;

bool canSwap(int *a,int cur,int next){
  for(int i=cur;i<next;i++){
    if(a[i] == a[next]) return false;
  }
  return true;
}

void permutate(int *a,int cur,int n){
  if(cur == n){
    res.insert(vector<int>(a,a+n));
    return;
  }
  for(int next = cur;next<n;next++){
    if(canSwap(a,cur,next)){
    swap(a[cur],a[next]);
    permutate(a,cur+1,n);
    swap(a[cur],a[next]);
    }
  }
}

void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  permutate(a,0,n);
  for(auto vec: res){
    for(auto y:vec) cout<<y<<" ";
    cout<<"\n";
  }
}

int main()
{
  solve();
  
  return 0;
}
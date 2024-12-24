// Input Format: N = 3
// Result: 
// 1    1
// 12  21
// 123321
#include <bits/stdc++.h>

using namespace std;

void Solve(){
  int t;
  cin>>t;
  for (int i=0; i<t; i++) {
    for (int j=0; j<i+1; j++) {
      cout<<j+1;
    }
    for (int j=2*(t-i-1); j>0; j--) {
      cout<<" ";
    }
    for (int j=i+1; j>0; j--) {
      cout<<j;
    }
    cout<<"\n";
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  Solve();

  return 0;
}
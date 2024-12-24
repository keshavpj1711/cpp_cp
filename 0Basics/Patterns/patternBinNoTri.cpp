// Input Format: N = 3
// Result: 
// 1
// 01
// 101
#include <bits/stdc++.h>

using namespace std;

void Solve(){
  int t;
  cin>>t;
  int shift;
  for (int i=0; i<t; i++) {
    shift=0;
    if (i%2==0) {
      shift=1;
    }
    for (int j=0; j<i+1; j++) {
      cout<<shift;
      // One way of doing the shift in a row
      // if (shift) {
      //   shift=0;
      // } else {
      //   shift=1;
      // }
      // Other way of doing the shift 
      shift=1-shift;
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
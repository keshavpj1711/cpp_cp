// Input Format: N = 3
// Result: 
//   *  
//   **
//   ***  
//   **
//   * 
#include <bits/stdc++.h>

using namespace std;

void Solve(){
  int t;
  cin>>t;
  for (int i=0; i<2*t+1; i++) {
    int stars=i;
    if (i>t) {
      stars = 2*t-i;
    }
    for (int j=0; j<stars; j++) {
      cout<<"*";
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
// Input Format: N = 3
// Result: 
// 1
// 2 3
// 4 5 6
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void Solve(){
  int t;
  cin>>t;
  int num=1;
  for (int i=0; i<t; i++) {
    for (int j=0; j<=i; j++) {
      cout<<num;
      num++;
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
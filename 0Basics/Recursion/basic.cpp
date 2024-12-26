#include <bits/stdc++.h>

using namespace std;

void printNTimes(int n, string& str){
  if (n==0) {
    return;
  } else {
    cout<<str<<endl;
    printNTimes(n-1, str);
  }
}

void Solve(){
  string anyStr;
  int n;
  cin>>anyStr>>n;
  printNTimes(n, anyStr);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  Solve();

  return 0;
}
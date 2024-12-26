#include <bits/stdc++.h>

using namespace std;

int SolveFactorial(int n){
  if (n==0){
    return 1;
  }
  int factorial;
  factorial = n;
  factorial *= SolveFactorial(n-1);
  return factorial;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  int n;
  cin>>n;
  cout<<SolveFactorial(n);

  return 0;
}
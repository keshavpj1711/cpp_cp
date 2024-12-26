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
  // Prints a string N times
  string anyStr;
  int n;
  cin>>anyStr>>n;
  printNTimes(n, anyStr);
}

void Solve1(int n){
  // Prints N to 1
  if (n==1) {
    cout<<1;
    return;
  } else {
    cout<<n;
    Solve1(n-1);
  }
}

void Solve2(int i, int n){
  // Prints 1 to N
  if (i==n) {
    cout<<n;
    return;
  } else {
    cout<<i;
    Solve2(i+1, n);
  }
}

int SolveSum(int n){
  // Printing sum of N terms
  if (n==0) {
   return 0;
  }
  int sum = n;
  sum += SolveSum(n-1);
  return sum;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  // Solve();
  // Solve1(5);
  // Solve2(1, 5);
  cout<<SolveSum(99);

  return 0;
}
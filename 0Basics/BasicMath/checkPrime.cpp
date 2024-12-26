#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void SolveBruteforce(){
  int num;
  cin>>num;
  bool isPrime=true;
  for (int i=2; i<=num/2; i++) {
    if (num%i==0) {
      isPrime=false;
      break;
    }
  }
  cout<<isPrime;
}

void SolveOptimal(){
  int num;
  cin>>num;
  bool isPrime=true;
  if (num>1 and num<4) {
    isPrime=true;
  } else if (num==1) {
    isPrime=false;
  }
  for (int i=2; i<=pow(num, 0.5) and isPrime; i++) {
    if (num%i==0) {
      isPrime=false;
    }
  }
  cout<<isPrime;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  // SolveBruteforce();
  SolveOptimal();

  return 0;
}
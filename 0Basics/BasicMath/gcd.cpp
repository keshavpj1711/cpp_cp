#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void SolveBruteforce(){
  int n1, n2;
  cin>>n1>>n2;
  int gcd;
  for (int i=1; i<=min(n1, n2); i++) { // If you wish to run this loop minimal number of times i<=min(0.5*max(a,b), min(a,b))
    if (n1%i==0 and n2%i==0) {
      gcd = i;
    }
  }
  cout<<gcd;
}

void SolveBetter(){ // This on an avg performs better than above soln
  int n1, n2;
  cin>>n1>>n2;
  int gcd;
  for (int i=min(n1, n2); i>0; i--) {
    if (n1%i==0 and n2%i==0) {
      gcd = i;
      break;
    }
  }
  cout<<gcd;
}

int findGcd(int a, int b){
  // Continue loop as long as both
  // a and b are greater than 0
  while(a > 0 && b > 0) {
    // If a is greater than b,
    // subtract b from a and update a
    if(a > b) {
      // Update a to the remainder
      // of a divided by b
      a = a % b;
    }
    // If b is greater than or equal
    // to a, subtract a from b and update b
    else {
      // Update b to the remainder
      // of b divided by a
      b = b % a; 
    }
  }
  // Check if a becomes 0,
  // if so, return b as the GCD
  if(a == 0) {
    return b;
  }
  // If a is not 0,
  // return a as the GCD
  return a;
}

void SolveOptimize(){
  // This uses Euclidean Algorithm which is that: It operates on the principle that the GCD of two numbers remains the same 
  // even if the smaller number is subtracted from the larger number.
  int n1, n2;
  cin>>n1>>n2;

  cout<<findGcd(n1, n2);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  // SolveBruteforce();
  // SolveBetter();
  SolveOptimize();

  return 0;
}
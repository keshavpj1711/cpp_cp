#include <bits/stdc++.h>
#include <cmath>
#include <iostream>

using namespace std;

void SolveBruteforce(){
  int num, counter=0;
  cin>>num;
  while (num>10) {
    num=num/10;
    counter++;
  }
  counter++; // Finally to increase the count by one so as to also take the digit under 10 also in consideration 
  cout<<counter;
}

void SolveOptimal(){
  int num;
  cin>>num;
  cout<<int(log10(float(num)))+1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  // This program is basically to count the number of digits 
  // of the input number
  // SolveBruteforce();
  SolveOptimal();  

  return 0;
}
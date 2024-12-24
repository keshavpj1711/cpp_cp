#include <bits/stdc++.h>

using namespace std;

int RevNum(int num){
  int revNum=0, lastDigit=0;
  while (num!=0) {
    revNum = lastDigit*10 + num%10;
    lastDigit = revNum;
    num/=10;
  }
  return revNum;
}

void Solve(){
  int num;
  cin>>num;
  if (RevNum(num)==num) {
    cout<<"Palindrome";
    return;
  } 
  cout<<"Not Palindrome";
  return;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  Solve();

  return 0;
}
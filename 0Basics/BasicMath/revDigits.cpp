#include <bits/stdc++.h>

using namespace std;

void Solve(){
  // This logic does not require storing the number but to store the number we can have another approach
  int num;
  cin>>num;
  bool flag=false;

  while (num!=0) {
    if (num%10!=0) {
      flag = true;
    }
    if (flag) {
      cout<<num%10;
    }
    num/=10;
  }
}

void Solve1(){
  int num, revNum=0, lastDigit=0;
  cin>>num;
  while (num!=0) {
    revNum = lastDigit*10 + num%10;
    lastDigit = revNum;
    num/=10;
  }
  cout<<revNum;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  // Solve();
  Solve1();

  return 0;
}
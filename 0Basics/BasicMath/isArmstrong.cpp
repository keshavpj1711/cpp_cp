#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void Solve(){
  int num, spSum=0;
  cin>>num;
  int digits=int(log10(num))+1;
  for (int i=0; i<digits; i++) {
    int val = (num/int(pow(10, i)))%10;
    spSum+=pow(val, digits);
    // cout<<pow(val, digits)<<" "<<val<<endl;
  }
  if (spSum==num) {
    cout<<"Armstrong";
    return;
  }
  cout<<"Not Armstrong";
  return;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  Solve();

  return 0;
}
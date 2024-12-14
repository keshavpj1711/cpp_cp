#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

void Solve(){
  int testCases;
  cin>>testCases;

  while (testCases--) {
    int N, M;
    map<long long, int> mp;
    int temp1, temp2;
    int countCollisions=0;

    cin>>N>>M;
    
    for (int i=0; i<N; i++) {
      cin>>temp1>>temp2;
      mp[temp1*temp2]++;
    }

    for (int i=0; i<M; i++) {
      cin>>temp1>>temp2;

      auto it = mp.find(temp1*temp2);
      if (it!=mp.end() and it->second!=0) {
        countCollisions++;
        mp[temp1*temp2]--;
      }
    }

    cout<<countCollisions<<"\n";
  }

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  Solve();

  return 0;
}
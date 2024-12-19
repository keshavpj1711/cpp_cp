#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
  return a.first+a.second > b.first+b.second;
}


void chooseBestCard(){
  // Filling and creating the card list
  int n;
  cin>>n;
  vector<pair<int, int>> arr(n);
  for (int i=0; i<n; i++) {
    cin >> arr[i].first >> arr[i].second;
  }

  sort(arr.begin(), arr.end(), cmp);
  // Then we can choose the cards from begin to end in the sorted vector
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  chooseBestCard();

  return 0;
}
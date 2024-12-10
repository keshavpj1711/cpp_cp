#include <bits/stdc++.h>

using namespace std;

// This code is wrt the question we wanted to solve in the pdf notes.

struct bag{
  int sumVal;
  map<int, int> mp;

  // Constructor
  bag(){
    sumVal = 0;
    mp.clear();
  }

  void insert(int x){
    mp[x]++;
    // The map automatically takes care of whether the element x is present or not
    // If not it creates a pair with first value as x and second value as 0 which is then incremented to 1

    sumVal += x; // This is to increase the sum as we add the elements to the bag
  }

  int getMin(){
    if(mp.empty())return -1;
    return mp.begin()->first;
  }

  int getMax(){
    if(mp.empty())return -1;
    return mp.rbegin()->first;
  }

  int getSum(){
    return sumVal;
  }

  void remove(int x){
    // First to check whether this element is present or not
    if (mp.find(x)==mp.end()) return; // This conditional logic means the element is not found
    
    mp[x]--;
    if (mp[x]==0) {
      mp.erase(x);
    }
    sumVal -= x;
  }

  int getDistinctElements(){
    return mp.size();
  }

  int getFreqOfNextGreater(int x){
    auto it = mp.lower_bound(x);
    if(it == mp.end()) return 0;

    return it -> second;
  }
};

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  

  return 0;
}
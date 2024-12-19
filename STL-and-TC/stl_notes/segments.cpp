// The problem we have is segments-segments everywhere from discussion_stl2

#include <bits/stdc++.h>
#include <set>
#include <utility>

using namespace std;
using lli = long long;
lli MOD = 10000007;

// Creating a multiset to store the segments
multiset< pair<lli, lli> > mset;

void insert(lli l, lli r){
  // In a multiset, it's sorted on the basis of the l of the pair
  auto it = mset.lower_bound({l, -MOD*MOD}); // This is to find whether a line seg with an l smaller than i/p l is present or not
  // If the itt doesn't return begin we check for the conditions i.e where does the input l,r segment lies and we place it accordingly
  if (it!=mset.begin()) {
    it--;

    if (it->second >= r) {
      // Basically this means that input line segment is consumed by the present line segment
      return;
    }
    if (it->second >= l) {
      // then we merge it
      l = it->first;
      mset.erase(it);
    }
  }

  it = mset.upper_bound({r, MOD*MOD});
  if (it!=mset.begin()) {
    it--;

    if (it->second >= r) {
      // then we merge it
      r = it->second;
      mset.erase(it);
    }
  }

  // Removing the middle segments still left
  while (1) {
    it = mset.lower_bound({l, -MOD * MOD});
        if (it == mset.end() || it->first > r) {
            break;
        }
        mset.erase(it);    
  }

  // Now inserting the element
  mset.insert({l, r});
}

int getNumberOfSeg(){
  return mset.size();
}

void solve(){
  // Number of queries we want to take
  int q;
  cin>>q;
  // A loop to handle each query
  for (int i=0; i<q; i++) {
    // Inputting a character to select option of what we need to do
    lli l, r;
    cin>>l>>r;
    cout << "Inserting segment: [" << l << ", " << r << "]" << endl;
    insert(l, r);
    cout<<"Number of Continuous segments: "<<getNumberOfSeg()<<endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  solve();  

  return 0;
}
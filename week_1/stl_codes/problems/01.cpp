#include <bits/stdc++.h>
#include <iostream>
#include <map>

using lli=long long;
using namespace std;

void solve(){
  int test_cases;
  cin>>test_cases;

  for (int i=0; i<test_cases; i++) {
    // Taking input of number of students in each class
    int noA, noB;
    cin>>noA>>noB;
    
    map<lli, bool> m1;
    // Also note how we created this simply 

    // Inserting elements in map
    for (int j=0; j<noA; j++) {
      lli temp;
      cin>>temp;
      m1[temp]=1;
    }
    
    for (int j=0; j<noB; j++) {
      lli temp;
      cin>>temp;

      if (m1.count(temp)) { // Checking if the student was present in A or not 
        cout<<"YES\n";
      }else { // If not we print NO and add it to the map
        cout<<"NO\n";
        m1[temp]=1;
      }
      // This is effective as we are checking while inserting the element only
    }

  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  solve();

  return 0;
}

// Comments

// One thing to note is that all the cout are executed once the inputs are taken. Why does this happen??
  // Output appears delayed because we used `ios_base::sync_with_stdio(0)` and `cin.tie(0)`:
    // 1. `sync_with_stdio(0)` disables synchronization between C++ and C I/O, allowing independent buffering.
    // 2. `cin.tie(0)` decouples `cin` from `cout`, so `cout` isn't flushed automatically before `cin`.
    // 3. Using `\n` instead of `endl` means no explicit buffer flush, delaying the output until the buffer is full or the program ends.

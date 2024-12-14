#include <bits/stdc++.h>
#include <cassert>
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

// Ok so the bruteforce solution works with a TC -> O(N*K)
void bruteForceSolve(){
  int testCases;
  cin>>testCases;

  while (testCases--) {
    int N, K;
    cin>>N>>K;
    vector<int> arr(N);  

    // Taking input of arr
    for (int i=0; i<N; i++) {
      cin>>arr[i];
    }

    for (int i=0; i<N-K+1; i++) {
      int max=arr[i];
      for (int j=0; j<K; j++) {
        if (max<arr[i+j]) {
          max = arr[i+j];
        }
      }
      cout<<max<<" ";
    }
    cout<<"\n";
  }
}

void optSolve1(){
  // This solution is implemented using multiset 
  // basically we create a multi set for A1 to Ai and report it's max value
  // and as we move forward from B1 to B2 we remove A1 and add Ai+1 then the report the max as B2

  // Insertion and deletion in a multiset takes TC -> O(logn)
  // So the TC here is -> O(N*logK)
  int testCases;
  cin>>testCases;

  while (testCases--) {
    int N, K;
    cin>>N>>K;
    int arr[N];
    multiset<int> mset; // To report B1 to B(N-K+1)

    for (int i=0; i<N; i++) {
      cin>>arr[i];
    }

    // Creating the multiset which is to be maintained
    for (int i=0; i<K; i++) {
      mset.insert(arr[i]);
    }

    // Now for each Bi we will print it's value
    for (int i=0; i<N-K+1; ++i) {
      cout<<*mset.rbegin()<<" ";
      // Operations to edit multiset for next Bi
      mset.erase(mset.begin());
      mset.insert(arr[K+i]);
    }
    cout<<"\n";

  }
}

void add(deque<int> &d, int x){
  while (!d.empty() && d.back()<x) {
    d.pop_back();
  }
  d.push_back(x);
  return;
}

void remdq(deque<int> &d, int x){
  assert(!d.empty());
  if (d.front()==x) {
    d.pop_front();
  }
  return;
}

void optSolve2(){
  // This is implemented by creating a Deque, Q of capacity K, 
  // that stores only useful elements of the current window of k elements.
  
  int testCases;
  cin>>testCases;

  while (testCases--) {
    int N, K;
    cin>>N>>K;
    int arr[N];

    deque<int> dq(K);

    for (int i=0; i<N; i++) {
      cin>>arr[i];
    }

    for (int i=0; i<K; i++) {
      add(dq, arr[i]);
    }

    for (int i=0; i<N-K+1; i++) {
      cout<<dq.front()<<" ";
      remdq(dq, arr[i]);
      if (i+K<N) {
        add(dq, arr[i+K]);
      }
    }

    cout<<"\n";
  }
  
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  // bruteForceSolve();  
  // optSolve1();
  optSolve2();

  return 0;
}
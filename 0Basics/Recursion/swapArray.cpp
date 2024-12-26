#include <bits/stdc++.h>
#include <vector>

using namespace std;

void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
}

void revArr(vector<int>& arr, int i){
  if (i==arr.size()/2-1) {
    swap(arr[i], arr[arr.size()-i-1]);
    return;
  }
  swap(arr[i], arr[arr.size()-i-1]);
  revArr(arr, i+1);
  return;
}

void Solve(){
  int n;
  cin>>n;

  vector<int> arr(n);
  for (int i=0; i<n; i++) {
    cin>>arr[i];
  }
  revArr(arr, 0);

  // Print the rev array 
  for (auto& val : arr) {
    cout<<val<<" ";
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  Solve();

  return 0;
}
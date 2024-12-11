// Problem:
// We are given with an array and a target sum and,
// we need to find the number of subarrays for which
// the elements in the subarray have their sum = target sum

#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using lli = long long;
// Now we need to vectors one for input array and other for prefix sum
vector<lli> arr, prefix;

void solve(){
  int n;
  cin>>n;
  // Resizing vectors for input size
  arr.resize(n);
  prefix.resize(n);

  // Adding input to arr and simul creating prefix sum
  for(int i=0; i<n; i++){
    cin>>arr[i];
    prefix[i]+=arr[i];
    // and if i>0 we also add previous sums
    if (i>0) {
      prefix[i]+=prefix[i-1];
    }
  }

  // Taking input for the target sum
  cout<<"Enter Target Sum:"<<endl;
  lli sum;
  cin>>sum;
  // Creating a map to save the number of time the prefix sum has been seen
  lli ans=0; //Basically this is our counter
  map<lli, lli> mp;
  mp[0]++;
  for (int j=0; j<n; j++) {
    ans+=mp[prefix[j]-sum]; // Checking the existence of prefix sum in the map
    mp[prefix[j]]++;
  }

  // Outputing the ans
  cout<<"Number of subarrays: "<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  solve();

  return 0;
}
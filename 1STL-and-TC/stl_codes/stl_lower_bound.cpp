#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;


int main(){
  
  int a[8] = {21, 13, 32, 12, 35, 61, 10, 9};
  // First we will apply lower_bound to an unsorted array

  cout << "Output when lower_bound applied to unsorted array: " << distance(a, lower_bound(a, a+8, 14)) << endl;
  // If the val is less than the highest element in array the output is unpredictable
  // But if the val is more than all the elements in the array the output is size of the array in this case it's 8

  // Now sorting the array 
  sort(a, a+8);

  // printing array after sorting
  for (int i = 0; i < 8; i++) {
    cout << i << " ---- " << a[i] << endl;
  }

  cout << "Output when lower_bound applied to sorted array: " << distance(a, lower_bound(a, a+8, 14)) << endl;

}
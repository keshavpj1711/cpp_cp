# Hashing

Hashing is basically keeping count of things.

## Number Hashing

So to count the occurences of integer in a normal array we can do this by:
- **Creating a hash array**
  - Basically if the max element in an array is n, then size of hash array would be n+1
  - Every index of hash array keeps the freq of that element(since an element of array is the index number in that hash array)
  > Keep in mind that: size of array in main can be at max 10^6 and 10^7 for integers and bool respectfully, AND globally 10^7 and 10^8

- **Or creating a map**
  - basically creating an unordered map and adding the element to it when inserting the element in array. 
  - Then map[element] gives the freq of that element.

## Character Hashing 

- **Creating a hash array**
  - This can be done similarly as we know that all the characters can be represented as ascii codes.

- **Creating a Mapr**
  - But say we will be using maps in that case we can create a `map<char, int>` and proceed with what we did similar to in numbers.
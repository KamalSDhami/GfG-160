#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// User function template for C++
class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          sort(arr.begin(),arr.end());
          for (int i =(arr.size()-2);i>=0;i--){
              if (arr[(i+1)]!= arr[i]){
                  return arr[i];
              }
          }
          return -1;
      }
  };
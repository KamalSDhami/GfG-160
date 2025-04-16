#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
    public:
      void reverseArray(vector<int> &arr) {
          int ptr= arr.size()-1;
          for (int i =0; i<(arr.size()/2);i++){
              swap(arr[i],arr[ptr--]);
          }
      }
  };
  
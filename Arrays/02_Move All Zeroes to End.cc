#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// User function template for C++
class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          int count =0,ptr=0;
          for (int i =0 ; i<arr.size();i++){
              if (arr[i]!=0){
                  arr[ptr++]= arr[i];
              }else{
                  count++;
              }
              
          }for (int i = arr.size()-count ; i<arr.size();i++){
              arr[i]=0;
          }
      }
  };
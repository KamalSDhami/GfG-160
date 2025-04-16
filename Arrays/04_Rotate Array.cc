#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    private : 
      void reverce (vector<int> & arr, int start , int end){
          while (start < end){
              swap(arr[start++],arr[end--]);
          }
      }
    public:
  
      // Function to rotate an array by d elements in counter-clockwise direction.
      void rotateArr(vector<int>& arr, int d) {
          // code here
          int rotation = d%arr.size();
          reverce (arr,0,rotation-1);
          reverce (arr,rotation,arr.size()-1);
          reverce (arr,0, arr.size()-1);
          
      }
  };
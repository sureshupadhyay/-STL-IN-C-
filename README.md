# -STL-IN-C-
code in which i am using stl of c++

PROBLEM:

Given an integer array A which contains duplicates. Remove duplicates from the array and return a new array without any duplicates.
That is, it should contain only unique elements.
NOTE : Best case time complexity-O(n) where n is the no of elements in the array.
Input Format :
Line 1 : Contains size of array
Line 2 : N integers which are elements of the array separated by space


SOLUTION:

#include<iostream>
#include<vector>
#include<set>

using namespace std;


vector<int> removeDuplicates(vector<int> input){

   int i;
  vector<int> result;
  set<int> s;
 for(i=0;i<input.size();i++)
   
  {
   if(s.find(input[i])==s.end()){
     s.insert(input[i]);
     result.push_back(input[i]);
     
   }
    
 }
  return result;
  

}

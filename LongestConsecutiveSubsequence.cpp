Longest Consecutive Subsequence
problem:
You are given with an array of integers that contain numbers in random order. Write a program to find the longest possible sub sequence of consecutive numbers using the numbers from given array.
You need to return the output array which contains consecutive elements. Order of elements in the output is not important.
Best solution takes O(n) time.
If two arrays are of equal length return the array whose index of smallest element comes first.

solution:

#include<unordered_map>
vector<int> longestSubsequence(int *a, int n){
        unordered_map<int,bool> p;
  for(int i=0;i<n;i++)
    p[a[i]]=true;
  int max=1;
  int start=a[0];
  for(int i=0;i<n;i++) {
    if(p.count(a[i]-1)==0) {
      int j=1;
      while(p.count(a[i]+j)!=0)
        j++;
      if(j>max) {
        max=j;
        start=a[i];
      }
    }
  }
   vector<int> b;
  for(int i=0;i<max;i++)
    b.push_back(start+i);
  return b;
}

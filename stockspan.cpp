The span si of a stock’s price on a certain day i is the minimum number of consecutive days (up to the current day) 
the price of the stock has been less than its price on that ith day. If for a particular day,
if no stock price is greater then just count the number of days till 0th day including current day.
For eg. if given price array is {3, 6, 8, 1, 2},
span for 4th day (which has price 2) is 2 because minimum count of consecutive days (including 4th day itself) from current day
which has price less than 4th day is 2 (i.e. day 3 & 4). Similarly, span for 2nd day is 3 because no stock price in left is greater than 2nd day's price. 
So count is 3 till 0th day.
Given an input array with all stock prices, you need to return the array with corresponding spans of each day.



solution:

#include<stack>
using namespace std;

int* stockSpan(int *price, int n) {
  int *b=new int[n];
int   i=0;
  b[0]=1;
  stack<int> s;
  s.push(0);
  for(i=1;i<n;i++)
  {
    while((!s.empty()) && price[i]>price[s.top()])
    {
       s.pop();
    }
    
    b[i]=s.empty()?i+1:i-s.top();
    
    s.push(i);
    
    
    
  }
  
 
	return b;

}

/*Problem Statement */
/* 
 * You have been given a number of stairs, initially, you are at the 0th stair, and you need to reach the Nth stair. Each time you can either climb one step or two steps. You are supposed to return the number of distinct ways in which you can climb from the 0th step to the Nth step
 * /

 /*explaination
  _ _ _ _ _ _ _ _ _ _

 T(n) we are at step n
 T(n-1) we are behind step n by 1
 T(n-2) we are behind step n by 2

 So we can  reach T(n) either from T(n-1) by 1 step or by T(n-2) by taking 2 steps.

 So T(n) = T(n-1) + T(n-2) is the recurrence relation.

 We are at step 0, to reach step 0, there is only 1 way

 */
#include "iostream"
using namespace std;

int waysFromZeroToNthStep( int n)
{
    if ( n <= 0)
    {
       return 0;
    }
    if( n==1 )
    {
      return 1;
    }
    if(n==2)
    {
      return 2;
    }
    return waysFromZeroToNthStep(n-1) + waysFromZeroToNthStep(n-2);
}

int main()
{
  int n, ways;
  cin >> n ;
  cout << endl;
  ways = waysFromZeroToNthStep(n);
  cout << ways << endl;
  return 0;
}

#include <iostream>
using namespace std;

int factorial( int n )
{
  //base case
  if(n==0)
  {
     return 1;
  }
  //reccurance relation
  return n * factorial(n-1);
  return n;
}


int main()
{
   int n, result;
   cin >> n;
   result = factorial( n );
   cout << result << endl;
}

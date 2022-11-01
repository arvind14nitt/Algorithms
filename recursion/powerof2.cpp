#include <iostream>
using namespace std;

//Power fof 2
//2^10 = 2 * 2^9
//2^n = 2* 2^(n-1) Recurrance relation
//base case when n=0, return 2^0 = 1
//
int powerof2( int n )
{
  if( n == 0)
  {
    return 1;
  }
  return 2 * powerof2(n-1);
}

int main()
{
  int n, result;
  cin >> n;
  result = powerof2(n);
  cout << result <<endl;
}

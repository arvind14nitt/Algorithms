//Finonnaci number f(n) = f(n-1) + f(n-2)
//A fibonacci number can be determined from the addition of previous two numbers.
//f(0) = 0
//f(1) = 1
//f(2) = 1
//f(3) = 2
#include <iostream>
using namespace std;

int fibo(int n)
{
   if(n == 0)
   {
      return 0;
   }
   if(n == 1)
   {
     return 1;
   }
   return fibo(n-1) + fibo(n-2);
}

int main()
{
   int n, result;
   cin >> n;
   cout << endl;
   result = fibo(n);
   cout << result << endl;
}

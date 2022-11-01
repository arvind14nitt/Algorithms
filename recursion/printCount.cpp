#include "iostream"

using namespace std;

//input 10 start from 1 to 10 
//output 1 2 3 4...10
void printCounting(int n)
{

   if(n==0)
	   return;
   printCounting(n-1);
   cout<< n <<endl;
}
int main()
{
   int n, result;
   cin >> n;
   cout<<endl<<endl;
   printCounting(n);
   return 0;
}

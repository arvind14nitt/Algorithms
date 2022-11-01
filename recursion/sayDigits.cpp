/* input : 678
  output: six seven eight
  */
#include <iostream>
#include <string> //for string
using namespace std;

void sayDigits(string number[], int n)
{
/*
 * 
   n%10 == gives the remainder=8
   n/10 == gives integer=67
 */
  if(n == 0 )// This indiactes that we are left with no digits
  {
     return;
  }
  //To print in reverse
  int digit = n%10;
  cout<<number[digit]<<endl;

  sayDigits(number,n/10);
//To print in order
  //int digit = n%10;
 // cout<<number[digit]<<endl;

}

int main()
{
  int n;
  string number[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  cin>>n;
  sayDigits(number, n);
  return 0;
}

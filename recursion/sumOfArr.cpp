#include <iostream>
using namespace std;

int sum(int * arr, int size)
{
  if(size == 0 )
  {
    return 0;
  }
  if(size == 1)
  {
    return arr[size - 1];
  }
  else{
     return arr[0] + sum(arr+1, size-1);
  }

}

int main()
{
  int arr[] = {1,2,3,14,30};
  int size = sizeof(arr)/sizeof(int);
  int result = sum(arr, size);
  cout << result<< endl;
  return 0;
}

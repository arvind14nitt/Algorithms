#include <iostream>
using namespace std;

/* input = arr[] = {1,2,3,4,5};
 * search for key element i.e 3 *
 * if found return yes else no */

bool linearSearch(int * arr, int size, int key)
{
  if(size == 0)
	  return false;
  if(size == 1) 
  {
    if(arr[0] == key)
	  return true;
    else
	  return false;
  }
  else{
	  if(arr[0] == key)
		  return true;
	  else
		  return linearSearch(arr+1, size-1, key);
  }

}


int main()
{
  int arr[] = {14,2,9,4,5,2,18};
  int key = 1;
  int size = sizeof(arr)/sizeof(int);
  bool result = linearSearch(arr, size, key);
  if(result)
	  cout << "Key is Found" <<endl;
  else
	  cout << "Key is not Found"<<endl;
}

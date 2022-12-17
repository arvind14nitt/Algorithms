#include <iostream>
using namespace std;
/*
 * Binary Search is performed in the sorted array
 * compare with the mid element
 * if the key is less than the mid element, compare in the left array
 * else compare in the right array
 * repeat
 */
bool binarySearch(int * arr, int size, int key)
{
    if(size == 0)
	    return false;

    if(key == arr[size/2])
	    return true;
    if(key < arr[size/2])
	    return binarySearch(arr, size/2, key);
    else{
	    if(size%2 != 0)
         	    return binarySearch(arr+(size/2)+1, size/2, key);
	    else
		    return binarySearch(arr+(size/2), size/2, key);
    }
}
int main()
{
  int arr[] = {2,3,4,5};
  int key = 6;
  int size = sizeof(arr)/sizeof(int);
  bool result = binarySearch(arr, size, key);
  if(result)
  {
    cout << "key Found" <<endl;
  }else
  {
    cout << " key not found" <<endl;
  }
}

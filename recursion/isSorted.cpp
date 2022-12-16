#include <iostream>
using namespace std;

//isSorted is a function which returns true if the array is sorted, else false.

bool isSorted(int * arr, int start_index, int size)
{

   if(start_index == size-1){
       return true;
   }
   if((arr[start_index] > arr[start_index+1]) && (start_index < size))
   {
    	   return false; //not sorted
   }else //sorted
   {
       return isSorted(arr, start_index+1, size);
   }

}

int main()
{
    int arr[] = {1,2,4,9,19};
    int size = sizeof(arr)/sizeof(int);
    cout << size <<endl;
    bool result = isSorted(arr,0, size);
    if(result)
    cout<<"array is sorted"<< result << endl;
    else{
     cout<< "not sorted" <<endl;
    }
    return 0;
}

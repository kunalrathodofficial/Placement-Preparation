#include <iostream>

using namespace std;

void swapElements(int arr[], int start, int end, int size)
{
    arr[start] = arr[start] + arr[end];
    arr[end] = arr[start] - arr[end];
    arr[start] = arr[start] - arr[end];
}

int main()
{

   int arr[5] = {1,2,7,9,11};

   int size = sizeof(arr) / sizeof(arr[0]);
   int start = 0;
   int end = size-1;

   for(int start = 0; start<end ; start++){
    swapElements(arr, start, end, size );
     end--;
   }

     for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
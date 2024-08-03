#include <iostream>
using namespace std;

int findPivot(int arr[], int size){
    int s=0;
    int e= size-1;
    int mid = s+ (e-s)/2;
    while(s<=e){
        if(arr[mid]>arr[0]){
          s=mid+1;
           
        }
        else{
           return mid;
        }
       mid = s+ (e-s)/2;
    }
}

int binarysearch(int arr[], int start, int end, int key){
  int s = start;
  int e = end;

  while(s<=e){
    int mid = s+(e-s)/2;

    if(arr[mid]== key){
      return mid;
    }
    else if(arr[mid]>key){
      e = mid-1;
    }
    else{
      s = mid+1;
    }

  }
}

int main() {
   int arr[5] = {7,9, 1,2,3};
   int size = sizeof(arr)/sizeof(arr[0]);
   int key = 7;

   int pivot = findPivot(arr, size);

   if(key < arr[0]){
    cout << binarysearch(arr, pivot, size-1, key);

   }
   else{
     cout << binarysearch(arr, 0 ,pivot , key);
   }
    
    return 0;
}

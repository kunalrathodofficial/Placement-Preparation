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

int main() {
   int arr[3] = {1,7,2};
   int size = sizeof(arr)/sizeof(arr[0]);

   cout<< findPivot(arr, size);
    
    return 0;
}

#include <iostream>
using namespace std;

int peakIndex(int arr[], int size){
    int s=0;
    int e= size-1;
    int mid = s+ (e-s)/2;
    while(s<=e){
      

        if(arr[mid]>arr[mid+1]){
           if(arr[mid]>arr[mid-1]){
           return mid;
           }
        }
        else{
            s=mid+1;
        }
       mid = s+ (e-s)/2;
    }
}


int main() {
   int arr[7] = {1,2,1,3,5,6,4};
   int size = sizeof(arr)/sizeof(arr[0]);

   cout<< peakIndex(arr, size);
    
    return 0;
}

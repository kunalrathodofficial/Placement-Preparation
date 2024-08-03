#include <iostream>
using namespace std;


void printArray(int arr[], int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
}

int binarySearch1(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
while(s<=e){
    int mid = s+ (e-s)/2;

    if(arr[mid]== key){
        return mid;
    }

    if(arr[mid]< key){
        s= mid+1;
    }
    else{
        e= mid-1;  
    }
   
}

return -1;
}
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,12};
    int key = 2;

    int size = sizeof(arr)/sizeof(arr[0]);
    
    int result = binarySearch1(arr, size, key);

    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

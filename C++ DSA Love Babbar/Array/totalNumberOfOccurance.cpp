#include <iostream>
using namespace std;

int firstOccu(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int ans = -1;
    
while(s<=e){
    int mid = s+ (e-s)/2;
    if(arr[mid]== key){
        ans = mid;
        e = mid -1 ;
    }
    else if(arr[mid]< key){
        s= mid+1;
    }
    else{
        e= mid-1;  
    }
   
}
 return ans;
   
}

int lastOccu(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int ans = -1;
    
while(s<=e){
   
int mid = s+ (e-s)/2;
    if(arr[mid]== key){
        ans = mid;
        s = mid+1 ;
    }
   else if(arr[mid]< key){
        s= mid+1;
    }
    else{
        e= mid-1;  
    }   
}
return ans;

}


int main() {
   int arr[6] = {1, 2, 3, 3, 3, 5};
    int element = 3;

    int size = sizeof(arr)/sizeof(arr[0]);
    
    int firstOccurance = firstOccu(arr, size, element);
    int lastOccurance = lastOccu(arr, size, element);

   cout<<"The total number of occurance is "<< lastOccurance-firstOccurance+1; 

    return 0;
}

#include<iostream>
using namespace std;

bool isSorted (int arr[], int size){
   if(size ==0 || size ==1){
    return true;
   }
   
   if(arr[0]>arr[1]){
    return false;
   }
   else{
    isSorted(arr+1, size-1);
   }
   

   
}

int main(){
  
  int arr[5] = {5,6,7, 8, 1};

 

  if( isSorted(arr, 5)){
    cout<<"Array is sorted";
  }
  else{
    cout<<"Array is not sorted";
  }

    return 0;
}
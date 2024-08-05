#include<iostream>
using namespace std;

void swapElement(int arr[], int i, int j){
   int temp = arr[i];
   arr[i]=arr[j];
   arr[j]= temp;

}

int main(){
     int arr[9] = {-12,11,-13,-5,6,-7,5,-3,-6};
     int index = 0;
     for(int i =0; i<9;i++){
        if(arr[i]<0){
            swapElement(arr, i, index);
            index++;
        }

        
     }

     for(int i =0; i<9;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}
#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){
     int sum=0;
    for(int i=0; i<size; i++){
       sum =sum+ arr[i];
    }
   return sum;
}
int main(){
    int arr[10]={2, 4};
    // cout<<"Enter array's elements: ";
    // for(int i=0; i<10; i++){
    //     cin>>arr[i];
    // }
    cout<<"The sum of the Array is: "<< sumOfArray(arr, 10);

    return 0;
}
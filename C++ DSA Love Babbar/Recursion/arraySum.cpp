#include<iostream>
using namespace std;

 int sum = 0;

int arraySum (int arr[], int size){
   if(size ==0 ){
    return 0;
   }

  sum = sum +arr[0];
  cout<<sum<<endl;

  arraySum(arr+1, size-1);

  return sum;
   
}

int main(){
  
  int arr[5] = {1,2,3,4,5};

  cout<<"Sum of the array is :" << arraySum(arr, 5);

    return 0;
}
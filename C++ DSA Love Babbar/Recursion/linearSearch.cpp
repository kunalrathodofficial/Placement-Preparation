#include<iostream>
using namespace std;

bool linearSearch (int arr[], int size, int key){

  if(size == 0){
    return false;
  }
  if(arr[0]== key ){
    return true;
  }
  else{
    linearSearch(arr+1, size-1, key);
  }

   
}

int main(){
  
  int arr[5] = {1,2,4,5};

  cout<<linearSearch(arr, 5, 3);

    return 0;
}
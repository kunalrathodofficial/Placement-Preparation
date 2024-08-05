#include<iostream>
using namespace std;

void swap( int arr[] ,int a,int b){

   arr[a]= arr[a]+ arr[b];
   arr[b]= arr[a]- arr[b];
   arr[a]= arr[a]- arr[b];

};

int main(){
    int arr[5]={7,10, 4 ,20 ,15};
    int k =4;
    int l=0;
    int r=4;

    for(int i= l; i<=r; i++){
        for(int j=i+1; j<=r;j++){
           if(arr[i]>arr[j]){
            swap(arr, i,j);
           }
        }
    }

     for(int i= l; i<=r; i++){
        cout<<arr[i]<<" ";
     }

     cout<<endl;

     cout<<arr[k-1];
    return 0;
}
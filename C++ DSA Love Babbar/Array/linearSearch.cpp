#include<iostream>
using namespace std;

int linearSearch( int arr[],int key,int size){
     for(int i=0; i<size; i++){
       if(arr[i]== key){
        cout<< key <<" is present at "<< i<<" index in the array";
        return 0;
       } 
    }
    cout<<"Given Key is not present in Array";
}
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;

    cout<<"Enter the key you want to find: ";
    cin>>key;

    linearSearch(arr, key, 10);

    return 0;
}
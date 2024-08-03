#include <iostream>

using namespace std;

int main()
{
    int arr1[10]= {1,2,3,4};
    int arr2[10]= {3,4};
    int MIN = -1;
    int k=0;

    int intersection[10]={0};

    for(int i=0; i<10 ; i++){
        int element = arr1[i];


        for(int j=0; j<10 ; j++){
            if(element<arr2[j]){
                break;
            }
               if(element == arr2[j]){
                intersection[k]=element;
                k++;
                element = MIN;
                break;

               }
        }
    }


   for(int i=0;i<10; i++){
    cout<<intersection[i]<<" ";
   }
    return 0;
}
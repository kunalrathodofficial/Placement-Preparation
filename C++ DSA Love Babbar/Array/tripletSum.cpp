#include <iostream>

using namespace std;

int main()
{
    int arr1[5]= {1,2,3,4,5};
    int sum = 10;

    for(int i =0; i<5 ; i++){
        for(int j= i+1; j<5; j++){
            for(int k= j+1; k<5; k++){
          if(arr1[i]+arr1[j]+arr1[k] == sum){
                cout<<arr1[i]<<" "<<arr1[j]<<" "<<arr1[k];
                cout<<endl;
                continue;
          }
            }
        }
      }
       return 0;
}
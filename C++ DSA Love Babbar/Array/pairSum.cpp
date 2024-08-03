#include <iostream>

using namespace std;

int main()
{
    int arr1[5]= {2,-3,3,3,-2};
    int sum = 0;

    for(int i =0; i<5 ; i++){
        for(int j= i+1; j<5; j++){
            if(arr1[i]+arr1[j] == sum){
                if(arr1[i]>arr1[j]){
                    cout<<arr1[j]<<" "<<arr1[i];
                }
                else{
                    cout<<arr1[i]<<" "<<arr1[j];
                }
                
                cout<<endl;
                continue;
            }
        }
    }
        return 0;
}
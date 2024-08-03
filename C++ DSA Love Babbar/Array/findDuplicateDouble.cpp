#include <iostream>

using namespace std;

int main()
{
int arr[6]= {1,2,3,4,3,2};
 int size = sizeof(arr) / sizeof(arr[0]);
int sum=0;

for(int i=0; i<size ; i++){
    sum = sum =arr[i];
}

int nthsum = ((size-1)*(size-2))/2;



cout<< nthsum -3 ;
    return 0;
}
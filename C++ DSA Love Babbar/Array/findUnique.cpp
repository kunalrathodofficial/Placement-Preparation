#include <iostream>

using namespace std;



int main()
{

   int arr[7] = {1,3,4,1,3,4,5};
   int size = sizeof(arr) / sizeof(arr[0]);
   int uniqueElement=0;

   for(int i=0; i<size ; i++){
      uniqueElement = uniqueElement^arr[i];
   }

   cout<<uniqueElement;
  
    return 0;
}
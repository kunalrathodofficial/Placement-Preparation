#include<iostream>
using namespace std;

int fact (int n){
    if(n==1 || n==0)
      return 1;

    int factorial = n* fact(n-1);  
}

int main(){
   int n;
   cout<<"Enter a Number: ";
   cin>>n;

   cout<<"factorial of " << n<< " is "<< fact(n);
    return 0;
}
#include<iostream>
using namespace std;

int Stairs (int n){
    if(n<0)
      return 0;

     if(n==0)
      return 1;  

    int possibleWays = Stairs(n-1) + Stairs(n-2);  

    return possibleWays;
}

int main(){
   int n;
   cout<<"Enter a Number: ";
   cin>>n;

   cout<< Stairs(n);
    return 0;
}
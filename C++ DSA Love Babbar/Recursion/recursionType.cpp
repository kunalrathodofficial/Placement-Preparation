#include<iostream>
using namespace std;

void tailPrint(int n){
   //base case
    if(n==0){
        return;
    }

//Processing
    cout<<n<<endl;

//Recursive relation
   tailPrint(n-1);
}

void headPrint(int n){
   //base case
    if(n==0){
        return;
    }

//Recursive relation
   headPrint(n-1);

//Processing
    cout<<n<<endl;


}


int main(){
   int n;
   cout<<"Enter a Number: ";
   cin>> n;

cout<<"tail Recursion"<<endl;
   tailPrint(n);

   cout<<endl;

cout<<"head Recursion"<<endl;   
   headPrint(n);

    return 0;
}
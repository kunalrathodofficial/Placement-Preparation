#include<iostream>
using namespace std;

void fib(int n){
    if(n <= 1){
        cout<<"0"<<" ";
    }
    else{
        int first_term=0;
        int second_term=1;

        cout<<first_term<<" "<<second_term<<" ";

        for(int i=0; i<n; i++){
            cout<<first_term+second_term<<" ";
           int temp = first_term;
            first_term = second_term;
            second_term= temp +second_term;
        }
        
    }
}
int main(){
    int n;
     cout<<"Enter the number of term you want to print: ";
     
    cin>>n;

    fib(n);

    return 0;
}
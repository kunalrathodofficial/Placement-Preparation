#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    int bit=0;
    while (n!=0)
    {
        bit = n &1;
        n= n>>1;
    }
    
    int answer = (pow(10,n)* bit) + answer;
    cout<<"Binary Number is :"<< answer;

    return 0;
}
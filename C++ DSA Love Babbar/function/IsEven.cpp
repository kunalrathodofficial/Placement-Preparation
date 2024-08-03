#include<iostream>
using namespace std;
 
bool IsEven( int n){
    if(n&1){
        return 0;
    }else{
        return 1;
    }
} 
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    if(IsEven(n)){
        cout<<n <<"is Even";
    }
    else{
        cout<<n <<"is Odd";
    }


    
    return 0;
}
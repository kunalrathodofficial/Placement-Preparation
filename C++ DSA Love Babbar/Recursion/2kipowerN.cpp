#include<iostream>
using namespace std;

int twokipowerN(int n){

    //base condition
    if(n==0){
        return 1;
    }

// recursive function
   int result = 2* twokipowerN(n-1);
   return result;
}

int main(){
    int n;
    cin>>n;

    cout<<twokipowerN(n);

    return 0;
}
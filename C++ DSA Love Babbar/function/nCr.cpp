#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1; i<n; i++){
        ans= ans*i;
    }
    return ans;
}

void cNr(int n,int r){
     int numerator= fact(n);
     int Denominator= fact(r) * fact(n-r);

     cout<<"The value nCr is :"<<numerator/Denominator;

}

int main(){
    int n, r;
    cout<<"Enter the value of n and r: ";
    cin>>n>>r;
    cNr(n,r);
    return 0;
}
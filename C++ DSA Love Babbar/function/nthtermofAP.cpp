#include<iostream>
using namespace std;

int nthtermofAP(int n){
    return (3*n +7);

}


int main(){
    int n;
    cin>>n;
    cout<<"The "<< n<<"th term of A.P. is " << nthtermofAP(n);

    return 0;
}
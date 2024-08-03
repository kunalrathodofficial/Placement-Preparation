#include<iostream>
using namespace std;
int main(){
    int n;
    char ch ='A';
    cin>>n;
    int row=1;
   
    while(row<=n){
 int col =1;
 
while(col<=row){
   char pr=ch+n-1-row+1;
    cout<<pr;
   col++;
   ch++;
   
}
cout<<endl;
ch='A';
row++;
    }



 
    return 0;
}
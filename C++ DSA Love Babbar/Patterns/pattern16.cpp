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
   
    cout<<ch;
   col++;
   ch++;
   
}
cout<<endl;

row++;
    }



 
    return 0;
}
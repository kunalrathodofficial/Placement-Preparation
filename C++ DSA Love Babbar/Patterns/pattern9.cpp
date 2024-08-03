#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int row=1;
   
//     while(row<=n){
//  int col =1;
//  int c=row;
// while(col<=row){
   
//     cout<<c<<" ";
//    col++;
//    c++;
// }
// cout<<endl;
// row++;
//     }

while(row<=n){
 int col =1;
 
while(col<=row){
   
    cout<<row<<" ";
    
   col++;
   
}
cout<<endl;
row++;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        //print space
        int start=row-1;
        while(start){
            cout<<"  ";
            start--;
        }

        //print pattern
        int col=1;
        while(col<=n-row+1){
            cout<<"* ";
            col++;
        }
       cout<<endl;
        row++;
    }
    return 0;
}
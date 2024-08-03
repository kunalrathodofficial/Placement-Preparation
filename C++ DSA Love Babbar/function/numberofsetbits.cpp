#include<iostream>
using namespace std;

int countSetBit(int n){
    int count=0;
    while(n){
        count+= n & 1;
        n >>=1;
    }
    cout<<count;
   return count;
  

}
int main(){
     int n,m;
    cin>>n>>m;
   cout<<"The Total set bits are:"<< countSetBit(n)+ countSetBit(m);
    return 0;
}
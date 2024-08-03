#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character:";
    cin>>ch;
   
    if(ch >='A' && ch<='Z'){
        
        cout<<ch<<" is a uppercase character"<<endl;
    }
    else if(ch>='a' && ch<='z'){
       
        cout<<ch<<" is a lowercase character"<<endl;
    }
    else{
        
        cout<<ch<<" is a number"<<endl;
    }
    return 0;
}
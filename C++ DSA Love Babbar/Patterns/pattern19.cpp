#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int row = 1;

    while (row <= n)
    {
        
//space
int space =n-row;
        while (space)
        {
            cout<<" ";
            space=space-1;
        }
        // Star

       int col = 1;
        while(col<=row){
            cout<<"*";
            col =col +1;
        }
        cout<<endl;
        row = row+1;
    }

    

    return 0;
}
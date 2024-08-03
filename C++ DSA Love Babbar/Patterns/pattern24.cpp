#include <iostream>
using namespace std;
int main()
{
    int n;
int c=1;
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
            cout<<c;
            col =col +1;
            c++;
        }
        cout<<endl;
        row = row+1;
    }

    

    return 0;
}
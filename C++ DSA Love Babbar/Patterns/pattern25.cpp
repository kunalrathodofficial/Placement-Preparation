#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        // print spaces
        int space = n - row;
        while (space)
        {
            cout << "  ";
            space = space - 1;
        }
        // print first triangle
        int j=1;
        while(j<= row){
            cout<<j<<" ";
            j++;
        }

        // print second triangle
        int start= row -1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}
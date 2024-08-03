#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        int col = 1;

        // part 1
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col++;
        }

       
            // part 2
            while (col <= row)
            {
                cout << "*";
                col = col + 1;
            }
            // part 3

            while (col <= row)
            {
                cout << "*";
                col++;
            }
        

        cout << endl;
        row++;
    }

    return 0;
}
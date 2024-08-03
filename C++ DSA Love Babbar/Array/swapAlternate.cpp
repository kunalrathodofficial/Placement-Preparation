#include <iostream>

using namespace std;

void swap(int arr[], int size, int i)
{
    arr[i] = arr[i] + arr[i + 1];
    arr[i + 1] = arr[i] - arr[i + 1];
    arr[i] = arr[i] - arr[i + 1];
}

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i <= size - 1; i += 2)
    {
        if (i + 1 <= size - 1)
        {
            swap(arr, size, i);
        }
    }

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int even[4] = {2, 6, 8, 10};
    int odd[5] = {2, 6, 8, 10, 9};

    int size = sizeof(odd) / sizeof(odd[0]);

    for (int i = 0; i <= size - 1; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;

    swapAlternate(odd, 5);
    return 0;
}
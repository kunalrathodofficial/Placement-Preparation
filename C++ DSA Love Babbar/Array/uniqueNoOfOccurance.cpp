#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if the element found is greater
            // than the next element
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[6] = {1, 2, 2, 1, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    int count = 1;

    int v[6] = {0};
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            v[j] = count;
             int count = 1;
            j++;
        }
    }

    bubbleSort(v, j);

    for (int i = 0; i <j-1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << "false";
            break;
        }
        else
        {
            cout << "true";
            break;
        }
    }

    return 0;
}
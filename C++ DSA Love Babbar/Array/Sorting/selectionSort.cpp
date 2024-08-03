#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {  // Fix the loop condition
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {  // Fix the loop condition
        int minIndex = i;  // Initialize minIndex to i
        for (int j = i + 1; j < size; j++) {  // Fix the loop condition
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap elements at i and minIndex
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);  // Uncomment to print the array before sorting
    selectionSort(arr, size);  // Uncomment to sort the array
    printArray(arr, size);  // Uncomment to print the array after sorting

    return 0;
}

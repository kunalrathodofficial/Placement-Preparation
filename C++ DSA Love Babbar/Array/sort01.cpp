#include <iostream>

using namespace std;

void swapElement(int arr1[], int start, int end) {
    arr1[start] = arr1[start] + arr1[end];
    arr1[end] = arr1[start] - arr1[end];
    arr1[start] = arr1[start] - arr1[end];
}

int main() {
    int arr1[10] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Move the start pointer to the right past all zeros
        while (arr1[start] == 0 && start < end) {
            start++;
        }

        // Move the end pointer to the left past all ones
        while (arr1[end] == 1 && start < end) {
            end--;
        }

        // Swap if arr1[start] is 1 and arr1[end] is 0
        if (start < end) {
            swapElement(arr1, start, end);
            start++;
            end--;
        }
    }

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}

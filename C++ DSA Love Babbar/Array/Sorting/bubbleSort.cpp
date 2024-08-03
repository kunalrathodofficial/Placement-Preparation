#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {  
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {  
        for (int j = i + 1; j < size; j++) {  
           if(arr[i]>arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
           }
        }
        
    }
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);  
    bubblesort(arr, size);  
    printArray(arr, size);  

    return 0;
}

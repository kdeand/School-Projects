#include <iostream>
using namespace std;

int main() {
    int arrSize;

    cout << "Enter the size of the array: ";
    cin >> arrSize;
    int* parrSize = &arrSize;

    int* arr1 = new int[*parrSize];
    int* arr2 = new int[*parrSize];
    int* arr3 = new int[*parrSize];

    // Arrays of pointers to each element
    int** parr1 = new int*[*parrSize];
    int** parr2 = new int*[*parrSize];

    cout << "Array 1: " << endl;
    for (int i = 0; i < *parrSize; i++) {
        cout << "[" << i + 1 << "]: ";
        cin >> arr1[i];
        parr1[i] = &arr1[i];
    }

    cout << "Array 2: " << endl;
    for (int i = 0; i < *parrSize; i++) {
        cout << "[" << i + 1 << "]: ";
        cin >> arr2[i];
        parr2[i] = &arr2[i];
    }

    cout << "Array 3 consists of: " << endl;
    for (int i = 0; i < *parrSize; i++) {
        if (*parr1[i] > *parr2[i]) {
            arr3[i] = *parr1[i];
        } else {
            arr3[i] = *parr2[i];
        }
        cout << "[" << i + 1 << "]: " << arr3[i] << endl;
    }

    // Clean up all dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] parr1;
    delete[] parr2;

    return 0;
}


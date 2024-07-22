#include <iostream>
using namespace std;

#if 0
// Function to modify an array (pass by pointer)
void modifyArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] += 10; // Increment each element by 10
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // Pass the array by pointer
    modifyArray(myArray, 5);

    cout << "Modified array: ";
    for (int i = 0; i < 5; ++i) {
        cout << myArray[i] << " ";
    }

    return 0;
}
#endif

#if 1

// Function to modify an array (pass by reference)
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] += 10; // Increment each element by 10
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // Pass the array by reference
    modifyArray(myArray, 5);

    cout << "Modified array: ";
    for (int i = 0; i < 5; ++i) {
        cout << myArray[i] << " ";
    }

    return 0;
}

#endif
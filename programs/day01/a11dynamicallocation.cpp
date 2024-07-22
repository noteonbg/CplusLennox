#include <iostream>
using namespace std;

int main() {
    // Allocate memory for an integer using new
    int* pInt = new int;
    if (!pInt) {
        cout << "Allocation of memory failed" << endl;
    } else {
        *pInt = 29;
        cout << "Value of pInt: " << *pInt << endl;
    }

    // Allocate memory for a float using new
    float* pFloat = new float(75.25);
    cout << "Value of pFloat: " << *pFloat << endl;

    // Allocate memory for an array of integers using new
    int n = 5;
    int* pArray = new int[n];
    if (!pArray) {
        cout << "Allocation of memory failed" << endl;
    } else {
        for (int i = 0; i < n; ++i) {
            pArray[i] = i + 1;
        }
        cout << "Values stored in the block of memory: ";
        for (int i = 0; i < n; ++i) {
            cout << pArray[i] << " ";
        }
        cout << endl;
    }

    // Free the allocated memory
    delete pInt;
    delete pFloat;
    delete[] pArray;

    return 0;
}

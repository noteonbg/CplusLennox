#include <iostream>
using namespace std;

// Inline function to calculate the cube of a number
inline int cube(int s) {
    return s * s * s;
}

int main() {
    int side = 3;

    // Call the inline function
    int result = cube(side);

    cout << "Cube of " << side << " is " << result << endl;

    return 0;
}

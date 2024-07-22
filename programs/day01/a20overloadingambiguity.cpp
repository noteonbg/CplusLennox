#include <iostream>
using namespace std;

void printValue(int x = 10) {
    cout << "Value: " << x << endl;
}

void printValue(double  y) {
    cout << "Value: " << y << endl;
}

int main() {
    printValue(); // Which function to call?
    return 0;
}

#include <iostream>
using namespace std;

void foo(int x) {
    cout << "foo(int): " << x << endl;
}

void foo(double y) {
    cout << "foo(double): " << y << endl;
}

int main() {
    // Taking the address of the 'foo' overload
    void (*x)(int) = foo;
    void (*pFooDouble)(double) =foo;

    // Calling the functions via function pointers
    x(42);
    pFooDouble(3.14);

    return 0;
}

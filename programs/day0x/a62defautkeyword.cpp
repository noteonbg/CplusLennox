#include <iostream>
using namespace std;

class A {
public:
    A(int x) {
        cout << "This is a parameterized constructor\n";
    }
    A()=default
    } // Compiler-generated default constructor
};

int main() {
    A a; // Calls the default constructor
    A x(1); // Calls the parameterized constructor
    return 0;
}


#if  0

In the above example, the A() constructor is explicitly
 defaulted using = default. The compiler generates a 
 default implementation for it, allowing us to
  create objects without providing a 
  custom constructor.


delete Keyword:
The delete keyword is used to explicitly disable the
 usage of a member function.
By appending = delete; to the end of a function
 declaration, you prevent that function from being
  called.

#endif



struct Z {
    Z(long long) {
        // Can initialize with a long long
    }
    Z(long) = delete; // Disallow initialization with a long
};

int main() {
    // Z z(42); // Error: Attempting to use the deleted constructor
    return 0;
}





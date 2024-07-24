#include <iostream>
using namespace std;

// Functor class
class Greet {
public:
    void operator()() {
        cout << "Hello World!" << endl;
    }
    
};

 ostream& operator <<(ostream &x,const Greet &g )
{

return x;
}

int main() {
    Greet g1;
      cout <<g1 << 3;


    #if 1
    Greet greet; // Create an instance of Greet
    greet();     // Call the object as a function
    #endif
    
    return 0;
}

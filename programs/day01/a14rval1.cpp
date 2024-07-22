#include <iostream>

using namespace std;

int main()
{

    int a = 10; // Declaring lvalue reference
int& lref = a;

/*

An lvalue refers to a memory location that identifies an object.
Lvalue references are declared using the & symbol before the name of the variable.
*/

int&& rref = 20; // Declaring rvalue reference



/*

value References:
An rvalue refers to the data value stored at some address in memory.
Rvalue references are declared using the && symbol before the name of the variable.

Rvalue references have two useful properties:
They extend the lifespan of temporary objects.
Non-const rvalue references allow modification of the rvalue.

*/



}
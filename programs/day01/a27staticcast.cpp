#include <iostream>

int main() {
    int intVal = 42;
    double doubleVal = static_cast<double>(intVal);

    std::cout << "Integer value: " << intVal << std::endl;
    std::cout << "Double value: " << doubleVal << std::endl;


   #if 1
    char c = 10;       // 1 byte
    int *p = (int*)&c; // 4 byte

    int *q = static_cast<int*>(&c);


    #endif
    return 0;
}

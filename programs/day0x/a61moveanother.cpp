#include <iostream>
#include <vector>

class Move {
private:
    int* data;

public:
    // Constructor
    Move(int d) {
        data = new int;
        *data = d;
        std::cout << "Constructor is called for " << d << std::endl;
    }

    // Copy constructor (deep copy)
    Move(const Move& source) : Move{ *source.data } {
        std::cout << "Copy Constructor is called - Deep copy for " << *source.data << std::endl;
    }

    // Move constructor (transfer ownership)
    Move(Move&& other) : data{ other.data } {
        std::cout << "move cosnstrutor is called";
        other.data = nullptr; // Null out the pointer of the temporary object
    }

    // Destructor
    ~Move() {
        if (data != nullptr)
            std::cout << "Destructor is called for " << *data << std::endl;
        else
            std::cout << "Destructor is called for nullptr" << std::endl;
        delete data;
    }
};

int main() {
    
    Move v1(3);
    Move v2 = (Move&&)v1;  // or use std::move(v1);
    

    return 0;
}

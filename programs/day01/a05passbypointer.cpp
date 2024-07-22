#include <iostream>
#include <string>

// Function to modify the value via a pointer (pass by address)
void modifyValue(int* ptr) {
    (*ptr) += 10; // Increment the value by 10
}


class Person {
private:
    std::string name;

public:
    Person(const std::string& initialName) : name(initialName) {}

     void freak() {  }


    // Function to change the name using a pointer
    void changeName(std::string* newNamePtr) {
        if (newNamePtr != nullptr) {
            name = *newNamePtr;
        }
    }

    // Getter method for name
    std::string getName() const {
        return name;
    }
};


void usingobject() {
    // Create a Person object
    Person person("Alice");

    // Display the initial name
    std::cout << "Initial name: " << person.getName() << std::endl;

    // Modify the name using a pointer
    std::string newName = "Bob";


    person.changeName(&newName);

    // Display the updated name
    std::cout << "Updated name: " << person.getName() << std::endl;

    
}


int main() {
    int num = 42;
    std::cout << "Original value: " << num << std::endl;
    // Pass the address of 'num' to the function
    modifyValue(&num);
    std::cout << "Modified value: " << num << std::endl;
    usingobject();
    return 0;
}


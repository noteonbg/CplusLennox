#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;

    Person(const string& initialName) : name(initialName) {}
};

// Function to change the name using a reference
void changeName(Person& x, const string& newName) {
    x.name = newName;
}

int main() {
    Person alice("Alice");

    cout << "Original name: " << alice.name << endl;

    // Pass the Person object by reference
    changeName(alice, "Bob");

    cout << "Updated name: " << alice.name << endl;

    return 0;
}

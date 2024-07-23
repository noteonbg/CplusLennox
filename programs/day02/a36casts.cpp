#include <iostream>
#include <string>

class Patient {
public:
    Patient(const std::string& name, int age)
        : name_(name), age_(age) {}

    // Getter for name
    const std::string& getName() const {
        return name_;
    }

    // Getter for age
    int getAge() const {
        return age_;
    }

    // Setter for age (non-const version)
    void setAge(int newAge) {
        age_ = newAge;
    }

private:
    std::string name_;
    int age_;
};

int main() {
    // Create a const Patient object
    const Patient constPatient("Alice", 30);
    const int i=3;

    // Using const_cast to modify a const object
    Patient* nonConstPatient = const_cast<Patient*>(&constPatient);
    nonConstPatient->setAge(31);  // Modifying the age


    // Using reinterpret_cast to reinterpret the address
    int* agePointer = reinterpret_cast<int*>(&nonConstPatient);
    std::cout << "Reinterpreted age: " << *agePointer << std::endl;
    // Using static_cast to convert between related types
    Patient* anotherPatient = new Patient("Bob", 25);
    const Patient* constPtr = static_cast<const Patient*>(anotherPatient);

    std::cout << "Name: " << constPtr->getName() << std::endl;
    std::cout << "Age: " << constPtr->getAge() << std::endl;

    delete anotherPatient;
    return 0;
}

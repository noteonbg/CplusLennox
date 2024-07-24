#include <iostream>

int main()
{


//copy intialization
int a = 5.5; // Initialize variable 'a' with the value 5


//Direct Intilaizataion

int b(6.6);

//int b(6); // Direct initialization of 'b' with the value 6


//Direct LIst initialization c++11

//int c{7.3}; //Description: Similar to copy initialization, but uses curly braces

int d ={8.8};

int x={};
std::cout  << "x" << x;

return 0;
}


#if 1

#include <iostream>
#include <string>

class Person {
public:
    // Constructor with direct list initialization
    Person(const std::string& name, int age) : name_{name}, age_{age} {
        std::cout << "Person created: " << name_ << ", " << age_ << " years old\n";
    }

private:
    std::string name_;
    int age_;
};

int main() {
    // Create Person objects using direct list initialization
    Person alice{"Alice", 30};
    Person bob{"Bob", 25};

    // Access the member variables
    std::cout << "Name: " << alice.name_ << ", Age: " << alice.age_ << "\n";
    std::cout << "Name: " << bob.name_ << ", Age: " << bob.age_ << "\n";

    return 0;
}





#endif


#if 0

#include <iostream>
#include <string>

class Person {
public:
    // Constructor with name and age
    Person(const std::string& name, int age) : name_{name}, age_{age} {
        std::cout << "Person created: " << name_ << ", " << age_ << " years old\n";
    }

    // Constructor with age only
    explicit Person(int age) : age_{age} {
        std::cout << "Person created: Unknown name, " << age_ << " years old\n";
    }

private:
    std::string name_;
    int age_;
};

int main() {
    // Create Person objects using direct list initialization
    Person alice{"Alice", 30}; // Constructor with name and age
    Person bob{25};            // Constructor with age only

    return 0;
}


#endif

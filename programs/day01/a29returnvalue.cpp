#if 1

#include <iostream>


int main()
{
std::string s="hello";
std::string s1 = std::move(s);
std::cout << s << s1 << "great";
return 0;

}


#endif
#if 0
#include <iostream>

// Simple class with a constructor and a copy constructor
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }
    MyClass(const MyClass& other) {
        std::cout << "Copy constructor called" << std::endl;
    }
};

MyClass createObject() {
    MyClass obj;
    return obj;  // Returning by value
}

int main() {
    MyClass objReturned = createObject();
    return 0;
}


#endif

#if 0
#include <iostream>

// Simple class with a constructor and a copy constructor
class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }
    MyClass(const MyClass& other) {
        std::cout << "Copy constructor called" << std::endl;
    }
};

MyClass createObject() {
    return MyClass();  // Return value optimization occurs here
}

int main() {
    MyClass objReturned = createObject();
    return 0;
}
#endif
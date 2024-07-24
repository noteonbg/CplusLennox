#if 1

#include <iostream>
#include <memory>

class Parent {
public:
    // ...
};

class Child {
public:
    std::weak_ptr<Parent> parentWeakPtr_;
    // ...
};

int main() {
    // Create a shared_ptr to a Parent object
    std::shared_ptr<Parent> parentSharedPtr = std::make_shared<Parent>();

    // Create a Child object
    Child child;

    // Set the weak_ptr in the Child to the shared_ptr of the Parent
    child.parentWeakPtr_ = parentSharedPtr; // Automatic conversion from shared to weak

    // Now let's simulate some actions:
    // 1. Parent is still valid
    // 2. Child accesses its parent (without owning it)
    // 3. Parent is deleted
    parentSharedPtr.reset(); // Simulating parent deletion

    // Check if the weak_ptr is still valid
    if (auto parent = child.parentWeakPtr_.lock()) {
        std::cout << "Child accessed parent: " << /* Use parent data here */ << std::endl;
    } else {
        std::cout << "Parent is no longer valid." << std::endl;
    }

    return 0;
}


#endif
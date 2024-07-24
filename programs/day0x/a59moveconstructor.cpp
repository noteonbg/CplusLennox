#include <iostream>

class MyClass {
private:
  int* data;
public:
  MyClass() {

    std::cout << "object is getting created";
    data = new int;
    *data = 0;
  }

  MyClass(const MyClass &temp)
  {
      std::cout <<"copy constructor";

  }

  MyClass(MyClass&& other) {
    // Move the data from the other object to this object.
    data = other.data;
    // Set the other object's data to nullptr.
    other.data = nullptr;
    std::cout  << "move constructor";
  }

  MyClass& operator=(MyClass&& other)
  {

    data = other.data;
    // Set the other object's data to nullptr.
    other.data = nullptr;
    return *this;

  }

  ~MyClass() {
    delete data;
  }

  void print() {
    std::cout <<  "how to waste time" << *data << std::endl;
  }
};

int main() {
  MyClass obj1;
  MyClass obj2((MyClass&&)obj1);

  // obj1 now has an empty string, while obj2 has a default string.
 // obj1.print(); // Prints 0
  obj2.print(); // Prints 0

  return 0;
}


#if 0

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int& lref1 = x; // lvalue reference to lvalue
    const int& lref2 = 15; //lvalue reference to rvalue
    int&& rref = 20; //rvalue reference to rvalue
    rref = 100;
    x = 200;
    cout<<x<<" "<<lref1<<" "<<lref2<<" "<<rref;
    return 0;
}



/*

The compiler will create an implicit move constructor and move assignment operator if all of the following are true:

There are no user-declared copy constructors or copy assignment operators.
There are no user-declared move constructors or move assignment operators.
There is no user-declared destructor.
The implicit move constructor and implicit move assignment operator both do a memberwise move. That is, each member of the moved-from object is moved to the moved-to object.

*/

#endif
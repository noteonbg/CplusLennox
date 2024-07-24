#include <iostream>
#include <memory> // Include the <memory> header for unique_ptr

#if 1
class A
{
    private:

        std::unique_ptr<int> i;

    
    public:
    A()
    {   
        i = std::make_unique(int);

    }

    ~A()
    {

    }

}


#if 0
struct B
{
    virtual ~B() = default;
 
    virtual void bar() { std::cout << "B::bar\n"; }
};
 
struct D : B
{
    D() { std::cout << "D::D\n"; }
    ~D() { std::cout << "D::~D\n"; }
 
    void bar() override { std::cout << "D::bar\n"; }
};
 


int main()
{
    //we have dynamically allocated memory on heap
    {
    std::unique_ptr<D> up(new D());
    up->bar();
}
std::cout <<"main function";
}

#endif

#if 0
struct MyClass {
    int value,value2;

    MyClass(int val,int anotherval,char anotherval1) : value(val) {
        std::cout << "Constructing MyClass with value: " << value << std::endl;
        value2=anotherval;
    }

    void freak()
    {
        std::cout <<"freak function at work" << value2  << "\n ";
    }

    ~MyClass() {
        std::cout << "Destructing MyClass with value: " << value << std::endl;
    }
};




int main() {



    // Create a unique_ptr to manage a dynamically allocated MyClass object
    std::unique_ptr<MyClass> scrap = 
    std::make_unique<MyClass>(42,23,'A');

    // Access the object through the unique_ptr
    std::cout << "Value via ptrObj: " << scrap->value << std::endl;
    scrap->freak();
     
    // The object is automatically deleted when ptrObj goes out of scope
    return 0;
}

#endif

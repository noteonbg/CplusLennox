#include <iostream>

class A
{
    public:
    A() { std::cout << 1; }
    A(int x) { std::cout << 2; } //this will not get called implicitly
    virtual void freak() {}
    virtual ~A()=0 { std::cout  << "AD"; }
};

class B:public A
{
    public:
    B() { std::cout << 3;}
    B(int x, int y):A(y) { std::cout << 4; }
    ~B()  { std::cout  << "BD"; }

};

int main()
{
    //yoiu have to tell hey look at the type of object
    //before you call destructor and not type of pointer.
    
    //B b(2,3);
    B obj;
    A &x =obj;
    //run  aroundbut one day delete
    delete x; //



}


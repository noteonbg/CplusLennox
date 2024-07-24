#include <iostream>

class A
{
private:
  A() {};

  public:
    static A f1()
    {
        A obj;
        std::cout << "figure out what control what i want";
        return obj;

    }


};

namespace somebody
{
void f1()
{
    A obj;


}

}



#if 0
class A
{

private:
  //friend class B;
  int x;

};

class B
{
public:
 void f1()
{   A obj;
    obj.x=3;

}

};


#endif
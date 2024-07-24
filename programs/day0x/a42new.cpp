#include <iostream>
#include <new>
 
void handler()
{
    std::cout << "Memory allocation failed, terminating\n";
    std::set_new_handler(nullptr);
    }
 
int main()
{
    std::set_new_handler(handler); // event registration.
    try
    {
        while (true)
        {
            new int[100000];
            std::cout << "ok we are alive ";
        }
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << e.what() << "may be dead \n";
    }
}

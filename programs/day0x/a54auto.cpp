#include <iostream>


//feature 1
int main()
{


// n C++11, the auto keyword allows automatic type deduction during variable declaration. It infers the type based on the initializer.

//c++ 11 feature added to auto deduce as int...
auto x = 42; // x is deduced as int
auto y = 3.14; // y is deduced as double
auto add =  [](auto a,auto b)->{ return a + b; };
std::cout << add(4, 5) << std::endl; // Result: 9


}


// feature 2

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use a range-based for loop to iterate through the vector
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}

//Lamda expression passing anonymous functions as input to




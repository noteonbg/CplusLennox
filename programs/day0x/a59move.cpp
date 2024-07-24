#include <iostream>
#include <utility> // for std::move

int main() {
    std::string source = "Hello, World!"; // Create a string

    // Move the string to another variable
    std::string destination = std::move(source);

    // Now 'source' is in a valid but unspecified state
    std::cout << "Moved string: " << destination << std::endl;
    std::cout << "Original string (moved-from): " << source << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <numeric> // for std::accumulate
//c++ 20 options.


int main() {
    // Initial vector of numbers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Create a view that filters out odd numbers and doubles the even numbers
    auto even_numbers_doubled = numbers
                                | std::ranges::views::filter([](int n) { return n % 2 == 0; })
                                | std::ranges::views::transform([](int n) { return n * 2; });

    // Print the resulting numbers
    std::cout << "Even numbers doubled: ";
    for (int n : even_numbers_doubled) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Sum the resulting numbers
    int sum = std::accumulate(even_numbers_doubled.begin(), even_numbers_doubled.end(), 0);
    std::cout << "Sum of even numbers doubled: " << sum << std::endl;

    // Create a view that sorts the original numbers in descending order
    auto sorted_numbers = numbers
                          | std::ranges::views::transform([](int n) { return n; }) // Just to make it a range
                          | std::ranges::to<std::vector>(); // Convert view to vector to sort

    std::ranges::sort(sorted_numbers, std::ranges::greater());

    // Print the sorted numbers
    std::cout << "Sorted numbers (descending): ";
    for (int n : sorted_numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}

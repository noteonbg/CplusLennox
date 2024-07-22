#include <iostream>
#include <vector>

class MyVector {
public:
    // Constructor to create a MyVector with a given size
    explicit MyVector(size_t size) : data_(new int[size]), size_(size) {
        for (size_t i = 0; i < size_; ++i) {
            data_[i] = static_cast<int>(i);
        }
    }

    // Move constructor (rvalue reference)
    MyVector(MyVector&& other) noexcept : data_(other.data_), size_(other.size_) {
        other.data_ = nullptr; // Transfer ownership
        other.size_ = 0;
    }

    // Destructor
    ~MyVector() {
        delete[] data_;
    }

    // Print the elements of the vector
    void print() const {
        for (size_t i = 0; i < size_; ++i) {
            std::cout << data_[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    int* data_;
    size_t size_;
};

int main() {
    // Create an rvalue MyVector
    MyVector temp_vector(5);

    // Use the move constructor to transfer ownership
    MyVector new_vector(std::move(temp_vector));

    // Print the elements of the new vector
    std::cout << "New vector: ";
    new_vector.print();

    // temp_vector is now in a valid but unspecified state
    // (its data has been moved to new_vector)

    return 0;
}

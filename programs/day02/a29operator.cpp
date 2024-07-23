#include <iostream>
#include <string>

class MedicalDevice {
private:
    int deviceID;
    std::string patientName;
    std::string deviceStatus;

public:
    MedicalDevice(int id, const std::string& name, const std::string& status)
        : deviceID(id), patientName(name), deviceStatus(status) {}

    // Overload the > operator to compare device ID with an integer
    bool operator>(int otherID) const {
        return deviceID > otherID;
    }

    // Display device information
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }
};

int main() {
    MedicalDevice device1(101, "John Doe", "Active");

    // Compare device ID with an integer

    //suppose we need to consider 100> device then what to do, consider using a friend function
    //whose first argument is int and second argument is an object.
    if (device1 > 100) {
        std::cout << "Device ID is greater than 100." << std::endl;
    } else {
        std::cout << "Device ID is not greater than 100." << std::endl;
    }

    return 0;
}

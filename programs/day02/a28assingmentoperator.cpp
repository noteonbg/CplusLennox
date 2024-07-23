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

    // Overload the assignment operator
    MedicalDevice& operator=(const MedicalDevice& other) {
        if (this != &other) {
            deviceID = other.deviceID;
            patientName = other.patientName;
            deviceStatus = other.deviceStatus;
        }
        return *this;
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
    MedicalDevice device2(102, "Alice Smith", "Inactive");

    device1.displayInfo();
    device2.displayInfo();

    // Assign device2 to device1 using the overloaded assignment operator
    device1 = device2;

    std::cout << "\nAfter assignment:" << std::endl;
    device1.displayInfo();

    return 0;
}

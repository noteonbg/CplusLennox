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

    // Declare the friend function
    
    friend void compareDevices
    (const MedicalDevice& device1,
     const MedicalDevice& device2);
    


    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }
};

// Friend function definition
 void compareDevices(const MedicalDevice& device1, const MedicalDevice& device2) {
    if (device1.deviceID == device2.deviceID) {
        std::cout << "Devices have the same ID." << std::endl;
    } else {
        std::cout << "Devices have different IDs." << std::endl;
    }
}

int main() {
    MedicalDevice device1(101, "John Doe", "Active");
    MedicalDevice device2(102, "Alice Smith", "Inactive");

    device1.displayInfo();
    device2.displayInfo();

    // Compare devices using the friend function
    compareDevices(device1, device2);

    return 0;
}

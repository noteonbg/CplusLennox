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

    // Overload the [] operator
    const std::string& operator[](int index) const {
        if (index == 0) {
            return deviceStatus;
        } else {
            static const std::string invalidStatus = "Invalid";
            return invalidStatus;
        }
    }

    // Display device information
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }
};

int main() {
    MedicalDevice myDevice(123, "Patient X", "Active");

    // Access device status using the [] operator
    std::cout << "Device Status (Active): " << myDevice[0] << std::endl;
    std::cout << "Device Status (Invalid): " << myDevice[1] << std::endl;

    return 0;
}

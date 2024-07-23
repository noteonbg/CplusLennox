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

    // Getter for device ID (const member function)
    int getDeviceID() const {
        return deviceID;
    }

    // Getter for patient name (const member function)
    const std::string& getPatientName() const {
        return patientName;
    }

    // Getter for device status (const member function)
    const std::string& getStatus() const {
        return deviceStatus;
    }

    // Setter for device status
    void setStatus(const std::string& newStatus) {
        deviceStatus = newStatus;
    }

    // Display device information (const member function)
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }
};

int main() {
    const MedicalDevice myDevice(123, "Patient X", "Active");

    // Accessing data using const member functions
    std::cout << "Device ID: " << myDevice.getDeviceID() << std::endl;
    std::cout << "Patient Name: " << myDevice.getPatientName() << std::endl;
    std::cout << "Status: " << myDevice.getStatus() << std::endl;

    // Uncomment the following line to see compilation error (const object)
    // myDevice.setStatus("In Use");

    return 0;
}

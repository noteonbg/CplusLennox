#include <iostream>
#include <string>

class MedicalDevice {
private:
    int deviceID;
    std::string patientName;
    mutable int HealthRequests; // Mutable counter

public:
    MedicalDevice(int id, const std::string& name)
        : deviceID(id), patientName(name), HealthRequests(0) {}

    // Getter for device ID (const member function)
    int getDeviceID() const {
        
        return deviceID;
    }

    // Getter for patient name (const member function)
    const std::string& getPatientName() const {
        return patientName;
    }

    // Getter for HealthRequests (const member function)
    int getHealthRequests() const {
        return HealthRequests;
    }

    // Display device information (const member function)
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Health Requests: " << HealthRequests << std::endl;
    }

    // Increment HealthRequests (non-const member function)
    void incrementHealthRequests() const{
        ++HealthRequests;
    }
};

int main() {
    const MedicalDevice myDevice(123, "Patient X");

    // Accessing data using const member functions
    std::cout << "Device ID: " << myDevice.getDeviceID() << std::endl;
    std::cout << "Patient Name: " << myDevice.getPatientName() << std::endl;
    
    // Accessing and modifying the mutable counter
    std::cout << "Initial Health Requests: " << myDevice.getHealthRequests() << std::endl;
    myDevice.incrementHealthRequests();
    std::cout << "Updated Health Requests: " << myDevice.getHealthRequests() << std::endl;
    return 0;
}

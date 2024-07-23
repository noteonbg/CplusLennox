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
    MedicalDevice& operator=(int newID) {
        deviceID = newID;
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
    MedicalDevice myDevice(123, "Patient X", "Active");

    // Assign an integer value to the device ID
    myDevice = 456;


 //   int k = myDevice;

    myDevice.displayInfo();

    return 0;
}


#if 0

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

    // Conversion function: Convert MedicalDevice to int (device ID)
    operator int() const {
        return deviceID;
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

    // Convert MedicalDevice object to an integer (device ID)
    int deviceIDAsInt = myDevice;

    std::cout << "Device ID as int: " << deviceIDAsInt << std::endl;

    return 0;
}


#endif

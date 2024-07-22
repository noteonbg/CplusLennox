#include <iostream>
#include <string>

class MedicalDevice {
private:
    int deviceID;
    std::string name;
    std::string manufacturer;

public:
    // Constructor to initialize the member variables
    MedicalDevice() {}
    MedicalDevice(int id,  std::string deviceName, 
     std::string deviceManufacturer)
        :deviceID(id), name(deviceName), manufacturer(deviceManufacturer) {

            // use id for whatever you want
        }

    // Getter methods
    int getDeviceID() const {
        return deviceID;
    }

    std::string getName() const {
        return name;
    }

    std::string getManufacturer() const {
        return manufacturer;
    }
};

int main() {
    // Create an instance of MedicalDevice
    int             i;
    MedicalDevice j;
    MedicalDevice myDevice(12345, "Blood Pressure Monitor", "HealthTech Inc.");




    // Access and print device information
    std::cout << "Device ID: " << myDevice.getDeviceID() << std::endl;
    std::cout << "Device Name: " << myDevice.getName() << std::endl;
    std::cout << "Manufacturer: " << myDevice.getManufacturer() << std::endl;

    return 0;
}




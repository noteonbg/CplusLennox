#if 1

#include <iostream>

// Example: Controlling a device in the electrical domain

class ElectricalDevice {
private:
    int deviceId;  // Device ID can vary
    int voltage;   // Voltage can vary

public:
    // Constructor
    ElectricalDevice(int id, int initialVoltage) : deviceId(id), voltage(initialVoltage) {}

    // Getter for device ID
    int getDeviceId() const {
        return deviceId;
    }

    // Method to set device ID using const_cast (not recommended in practice)
    void setDeviceId(int newId) {
        deviceId = newId;
    }

    // Method to set voltage
    void setVoltage(int newVoltage) {
        voltage = newVoltage;
    }

    // Method to print device information
    void printInfo() const {
        std::cout << "Device ID: " << deviceId << ", Voltage: " << voltage << "V" << std::endl;
    }
};

void freak(const ElectricalDevice& constDevice)
{
    


}

int main() {
    // Create an instance of ElectricalDevice
    ElectricalDevice device1(1, 120);

    // Access and print device information
    device1.printInfo();

    // Example of using const_cast to modify device ID (not recommended)
    const ElectricalDevice& constDevice = device1;
    int newId = 2;
    const_cast<ElectricalDevice&>(constDevice).setDeviceId(newId);

    // Access and print modified device information
    device1.printInfo();

    return 0;
}



#endif
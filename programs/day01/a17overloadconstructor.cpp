#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string serialNumber;
    string deviceName;
    int manufacturerID;

public:
    // Constructor with no arguments
    MedicalDevice() {
        serialNumber = "Unknown";
        deviceName = "Unnamed Device";
        manufacturerID = 0;
    }

    // Constructor with serial number and name
    MedicalDevice(const string& serial, const string& name) {
        serialNumber = serial;
        deviceName = name;
        manufacturerID = 0;
    }

    // Constructor with all properties
    MedicalDevice(const string& serial, const string& name,
     int manufID) {
        serialNumber = serial;
        deviceName = name;
        manufacturerID = manufID;
    }

    // Getter methods
    string getSerialNumber() const {
        return serialNumber;
    }

    string getDeviceName() const {
        return deviceName;
    }

    int getManufacturerID() const {
        return manufacturerID;
    }
};

int main() {
    // Creating instances of MedicalDevice
    MedicalDevice device1; // Calls the first constructor (no arguments)
    MedicalDevice device2("SN123", "Blood Pressure Monitor"); // Calls the second constructor
    MedicalDevice device3("SN456", "Thermometer", 789); // Calls the third constructor

    // Displaying device information
    cout << "Device 1: Serial Number = " << device1.getSerialNumber() << ", Name = " << device1.getDeviceName() << ", Manufacturer ID = " << device1.getManufacturerID() << endl;
    cout << "Device 2: Serial Number = " << device2.getSerialNumber() << ", Name = " << device2.getDeviceName() << ", Manufacturer ID = " << device2.getManufacturerID() << endl;
    cout << "Device 3: Serial Number = " << device3.getSerialNumber() << ", Name = " << device3.getDeviceName() << ", Manufacturer ID = " << device3.getManufacturerID() << endl;

    return 0;
}

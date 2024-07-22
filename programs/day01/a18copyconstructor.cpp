#include <iostream>
#include <string>
using namespace std;


#if 0
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
    MedicalDevice(const string& serial, const string& name, int manufID) {
        serialNumber = serial;
        deviceName = name;
        manufacturerID = manufID;
    }

    // Copy constructor
    MedicalDevice(const MedicalDevice& other) {

        std::cout << "copy constructor at work";
        serialNumber = other.serialNumber;
        deviceName = other.deviceName;
        manufacturerID = other.manufacturerID;
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
    // Creating an instance of MedicalDevice
    MedicalDevice originalDevice("SN123", "Blood Pressure Monitor", 789);





    MedicalDevice copiedDevice(originalDevice);




    // Displaying device information
    cout << "Original Device: Serial Number = " << originalDevice.getSerialNumber() << ", Name = " << originalDevice.getDeviceName() << ", Manufacturer ID = " << originalDevice.getManufacturerID() << endl;
    cout << "Copied Device: Serial Number = " << copiedDevice.getSerialNumber() << ", Name = " << copiedDevice.getDeviceName() << ", Manufacturer ID = " << copiedDevice.getManufacturerID() << endl;

    return 0;
}


#endif




#include <iostream>
#include <string>
using namespace std;


#if 1
struct MedicalDevice {
private:
    string* serialNumber; // Pointer to dynamically allocated memory
    string deviceName;
    int manufacturerID;

public:
    // Constructor with no arguments
    MedicalDevice() {

        std::cout << "constructor 1 getting called";
        serialNumber = new string("Unknown"); // Allocate memory for serial number
        deviceName = "Unnamed Device";
        manufacturerID = 0;
    }

    // Constructor with serial number and name
    MedicalDevice(const string& serial, const string& name) {
        std::cout << "constructor 2 getting called";
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = 0;
    }



    #if 0
     MedicalDevice(const MedicalDevice& other) {
        // Deep copy the serial number (allocate new memory)
        std:cout << "copy constructor at work" << endl;
        serialNumber = new string(*other.serialNumber);
        deviceName = other.deviceName;
        manufacturerID = other.manufacturerID;
    }
    #endif


    // Constructor with all properties
    MedicalDevice(const string& serial, const string& name, int manufID) {
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = manufID;
    }

    // Destructor to deallocate memory
    ~MedicalDevice() {
        std::cout << "\n destructor " << manufacturerID  << endl;
        
        if(serialNumber == nullptr)
            std::cout << "ok we got nullptr at serialnumber";
        delete serialNumber; // Deallocate memory for serial number
    }

    // Getter methods
    string getSerialNumber() const {
        return *serialNumber; // Dereference the pointer to get the value
    }

    string getDeviceName() const {
        return deviceName;
    }

    int getManufacturerID() const {
        return manufacturerID;
    }
};

void f2(MedicalDevice d1)
{
    std::cout << "\n f2 function at work \n";
    //std::cout << d1.getManufacturerID();    
}

int main() {
    // Creating instances of MedicalDevice

    {
    MedicalDevice device1("abc123","bp meter",23);
     // Calls the first constructor (no arguments)
    f2(device1);
    MedicalDevice device3 = device1;
    std::cout << "\n device 3  " << device1.getManufacturerID();



    }
    //std::cout << device1.getManufacturerID();
    std::cout  <<"program has ended";







   #if 0
    MedicalDevice device2("SN123", "Blood Pressure Monitor"); // Calls the second constructor
    MedicalDevice device3("SN456", "Thermometer", 789); // Calls the third constructor
    MedicalDevice device4(device3);
#endif



#if 0
    // Displaying device information
    cout << "Device 1: Serial Number = " << device1.getSerialNumber() << ", Name = " << device1.getDeviceName() << ", Manufacturer ID = " << device1.getManufacturerID() << endl;
    cout << "Device 2: Serial Number = " << device2.getSerialNumber() << ", Name = " << device2.getDeviceName() << ", Manufacturer ID = " << device2.getManufacturerID() << endl;
    cout << "Device 3: Serial Number = " << device3.getSerialNumber() << ", Name = " << device3.getDeviceName() << ", Manufacturer ID = " << device3.getManufacturerID() << endl;
#endif
    return 0;
}
#endif




#if 0

#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string* serialNumber; // Pointer to dynamically allocated memory
    string deviceName;
    int manufacturerID;

public:
    // Constructor with no arguments
    MedicalDevice() {
        serialNumber = new string("Unknown"); // Allocate memory for serial number
        deviceName = "Unnamed Device";
        manufacturerID = 0;
    }

    // Constructor with serial number and name
    MedicalDevice(const string& serial, const string& name) {
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = 0;
    }

    // Constructor with all properties
    MedicalDevice(const string& serial, const string& name, int manufID) {
        serialNumber = new string(serial); // Allocate memory for serial number
        deviceName = name;
        manufacturerID = manufID;
    }

    // Copy constructor
    MedicalDevice(const MedicalDevice& other) {
        // Deep copy the serial number (allocate new memory)
        serialNumber = new string(*other.serialNumber);
        deviceName = other.deviceName;
        manufacturerID = other.manufacturerID;
    }

    // Destructor to deallocate memory
    ~MedicalDevice() {
        std::cout << "destructor " << serialNumber << endl;
        delete serialNumber; // Deallocate memory for serial number
    }

    // Getter methods
    string getSerialNumber() const {
        return *serialNumber; // Dereference the pointer to get the value
    }

    string getDeviceName() const {
        return deviceName;
    }

    int getManufacturerID() const {
        return manufacturerID;
    }
};

int main() {
    // Creating an instance of MedicalDevice
    MedicalDevice originalDevice("SN123", "Blood Pressure Monitor", 789);

    // Creating a copy using the copy constructor
    MedicalDevice copiedDevice(originalDevice);

    // Displaying device information
    cout << "Original Device: Serial Number = " << originalDevice.getSerialNumber() << ", Name = " << originalDevice.getDeviceName() << ", Manufacturer ID = " << originalDevice.getManufacturerID() << endl;
    cout << "Copied Device: Serial Number = " << copiedDevice.getSerialNumber() << ", Name = " << copiedDevice.getDeviceName() << ", Manufacturer ID = " << copiedDevice.getManufacturerID() << endl;

    return 0;
}

#endif


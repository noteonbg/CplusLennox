#include <iostream>
#include <string>

class MedicalDevice {
private:
    
    std::string patientName;
    std::string deviceStatus;
       int deviceID;
public:
    // Static variable for category ID
       //this variable can be private also..
    static int CategoryId;
 

    // Constructor
    MedicalDevice(int id, const std::string& name, const std::string& status)
        : deviceID(id), patientName(name), deviceStatus(status) {}

    // Setter for device status
    void setStatus(const std::string& newStatus) {
        deviceStatus = newStatus;
    }

    // Getter for category ID
    static int getCategoryId() {

        
        return CategoryId;
    }

    // Display device information
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }
};

// Initialize the static variable
int MedicalDevice::CategoryId = 100; // Example value  // defintiion of the static variable of the class.

int main()
{
    MedicalDevice myDevice(123, "Patient X", "Active");
    const MedicalDevice &another = myDevice;
    //const referene or const object can acces only
    //const functions
    another.displayInfo();

    

    return 0;
}





int main1() {
    MedicalDevice myDevice(123, "Patient X", "Active");
    myDevice.displayInfo();

    MedicalDevice::CategoryId=45;
    myDevice.CategoryId=77;


    // Get and display the category ID
    std::cout << "Category ID: " << MedicalDevice::CategoryId << std::endl;

    return 0;
}

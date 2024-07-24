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
    ( MedicalDevice& device1,
     const MedicalDevice& device2);
     friend void compareDevices(MedicalDevice &d);
    


    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }

    bool freak(MedicalDevice &d)
    {
        std::cout << "function let it get called first";
        return false;   
    }

    



};

// Friend function definition
 void compareDevices(MedicalDevice& device1, const MedicalDevice& device2) {
    MedicalDevice d(1,"A","B");
    d.deviceID=45;
    device1.deviceID=44;
    if (device1.deviceID == device2.deviceID) {
        std::cout << "Devices have the same ID." << std::endl;
    } else {
        std::cout << "Devices have different IDs." << std::endl;
    }
}

void compareDevices(MedicalDevice& x)
{
    MedicalDevice d(1,"A","B");
    d.deviceID=45;
 
 std::cout <<"overloaded";


}

bool operator>(MedicalDevice &t, MedicalDevice &d)
    {
         /*   
        std::cout << "function let it get called first";
        return false;
        */
       return deviceID > d.deviceID
          
    }



int main() {
    MedicalDevice device1(101, "John Doe", "Active");
    MedicalDevice device2(102, "Alice Smith", "Inactive");

    #if 0    
    device1.displayInfo();
    device2.displayInfo();

    // Compare devices using the friend function
    compareDevices(device1, device2);

    #endif
    //if(device1.freak(device2))

    if(device1 > device2)
         std::cout  <<"device 1 is bigger";
    else    
        std::cout << "improve typing";




    return 0;
}

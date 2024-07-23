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

    // Overload the > operator

    #if 0
    bool operator>(const MedicalDevice& other) const {
        return deviceID > other.deviceID;
    }
    #endif

    bool operator==(const MedicalDevice& other) const {
        return deviceID == other.deviceID;
    }





    
    //overload operator < and == now...

    // Display device information
    void displayInfo() const {
        std::cout << "Device ID: " << deviceID << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Status: " << deviceStatus << std::endl;
    }

    MedicalDevice& operator=(int x)
     {
    //    std::cout << "number being assinged to object";    
        return *this;
     }

    operator int()
    {
            return 44;

    }

    
};




int main() {
    MedicalDevice device1(1, "John Doe", "Active");
    MedicalDevice device2(2, "Alice Smith", "Inactive");
    if(device1 < device2);

    

#if 0
    device1.displayInfo();
    device2.displayInfo();

    device1 =device2; //compiler by default gave you assingment overloaded operator function.
   
    device1=4; 


    // Compare devices using the > operator
    if (device1>device2) {
        std::cout << "Device 1 has a greater ID." << std::endl;
    } else {
        std::cout << "Device 2 has a greater ID." << std::endl;
    }

    int i =device1;
    float z = device1;

    std::cout << i  << std::endl;
    //some how device1 needs te casted into an int.
#endif














    return 0;
}

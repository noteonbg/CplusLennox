#include <iostream>
#include <string>

class MedicalDevice {
public:
    // Constructor
    MedicalDevice(const std::string& serialno, const std::string& manufacturerid, const std::string& name)
        : serialno_(serialno), manufacturerid_(manufacturerid), name_(name) {}

    // Pure virtual function for displaying device information
    virtual void displayInfo() const = 0;

protected:
    std::string serialno_;        // Protected property
    std::string manufacturerid_;  // Protected property
    std::string name_;            // Protected property
};


class BloodPressureMonitor : public MedicalDevice {
public:
    BloodPressureMonitor(const std::string& serialno, const std::string& manufacturerid, const std::string& name)
        : MedicalDevice(serialno, manufacturerid, name) {}

    // Implement the pure virtual function
    void displayInfo() const override {
        std::cout << "Blood Pressure Monitor Info:" << std::endl;
        std::cout << "Serial Number: " << serialno_ << std::endl;  // Accessing protected property
        std::cout << "Manufacturer ID: " << manufacturerid_ << std::endl;  // Accessing protected property
        std::cout << "Device Name: " << name_ << std::endl;  // Accessing protected property
    }
};

int main()
{

    
}


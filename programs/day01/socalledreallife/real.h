// MedicalDevice.h (Header file)
#ifndef ok
#define ok


#include <string>


//class definition will go into a header file
class MedicalDevice {
private:
    int deviceID;
    std::string patientName;
    std::string deviceStatus;

public:
    // Constructor
    MedicalDevice(int id, const std::string& name, const std::string& status);

    // Getter for device ID
    int getDeviceID() const;

    // Setter for device status
    void setStatus(const std::string& newStatus);

    // Display device information
    void displayInfo() const;
};

#endif // MEDICALDEVICE_H

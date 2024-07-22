//declarations will go into the seaprate file which will become a library
// MedicalDevice.cpp (Source file)
#include "real.h"
#include <iostream>

// Constructor definition
MedicalDevice::MedicalDevice(int id, const std::string& name, const std::string& status)
    : deviceID(id), patientName(name), deviceStatus(status) {}

// Getter definition
int MedicalDevice::getDeviceID() const {
    return deviceID;
}

// Setter definition
void MedicalDevice::setStatus(const std::string& newStatus) {
    deviceStatus = newStatus;
}

// Display information definition
void MedicalDevice::displayInfo() const {
    std::cout << "Device ID: " << deviceID << std::endl;
    std::cout << "Patient Name: " << patientName << std::endl;
    std::cout << "Status: " << deviceStatus << std::endl;


}

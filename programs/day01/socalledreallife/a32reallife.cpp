
// main.cpp
#include "real.h"

int main() {
    MedicalDevice myDevice(123, "Patient X", "Active");
    myDevice.displayInfo();
    // Modify the status
    myDevice.setStatus("In Use");
    myDevice.displayInfo();
    return 0;
}




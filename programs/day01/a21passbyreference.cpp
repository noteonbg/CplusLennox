#if 0

1. figure out how to write a MedicalDevice class.
2. what all changes you need to do make this program work...



void processByReference(MedicalDevice& device) {
    // Modify 'device' directly
    device.setStatus("In Use");
}

int main() {
    MedicalDevice myDevice(123, "Patient X");
    processByReference(myDevice);
    // 'myDevice' now has the updated status
    return 0;
}


//pass by pointer
void processByPointer(MedicalDevice* ptrDevice) {
    if (ptrDevice) {
        // Modify the object pointed to by 'ptrDevice'
        ptrDevice->setStatus("Maintenance");
    }
}

int main() {
    MedicalDevice* ptrMyDevice = new MedicalDevice(456, "Patient Y");
    processByPointer(ptrMyDevice);
    // 'ptrMyDevice' still points to the same object
    delete ptrMyDevice; // Clean up memory
    return 0;
}

void processByValue(MedicalDevice device) {
    // Modify the local copy 'device'
    device.setStatus("Idle");
}

int main() {
    MedicalDevice anotherDevice(789, "Patient Z");
    processByValue(anotherDevice);
    // 'anotherDevice' remains unchanged
    return 0;
}

#endif


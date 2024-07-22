#if 1

//As usual fill up the class. and think what needs to be done...

//move
MedicalDevice getDeviceByValue() {
    return MedicalDevice(789, "Patient C", "Idle");
}

int main() {
    MedicalDevice anotherDevice = getDeviceByValue();
    // 'anotherDevice' is a copy of the returned object
    return 0;
}



MedicalDevice* getDeviceByPointer() {
    return new MedicalDevice(456, "Patient B", "Inactive");
}

int main() {
    MedicalDevice* ptrDevice = getDeviceByPointer();
    ptrDevice->setStatus("Maintenance");
    // 'ptrDevice' points to a dynamically allocated object
    delete ptrDevice; // Clean up memory
    return 0;
}



MedicalDevice& getDeviceByReference() {
    static  MedicalDevice device(123, "Patient A", "Active");
    return device;
}

int main() {
    MedicalDevice& refDevice = getDeviceByReference();
    refDevice.setStatus("In Use");
    // 'refDevice' modifies the original device
    return 0;
}




#endif 
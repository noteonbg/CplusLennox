#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string deviceName;
    string serialNumber;
    int manufacturerID;

public:
    // Constructor to initialize attributes
    MedicalDevice(){}

    MedicalDevice(const string& name, const string& serial, int manufID)
        : deviceName(name), serialNumber(serial), manufacturerID(manufID) {
        cout << "MedicalDevice object created: " << deviceName << endl;
    }

    // Destructor
    ~MedicalDevice() {
        cout << "MedicalDevice object destroyed: " << deviceName << endl;
    }

    // Method to display device details
    void displayDetails() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Manufacturer ID: " << manufacturerID << endl;
    }
};

int main() {
    // Create a MedicalDevice object

   { 
    MedicalDevice *x =new MedicalDevice("Blood Pressure Monitor", "BP12345", 1001);
    delete x;
    

# if 0
     MedicalDevice device("Blood Pressure Monitor", "BP12345", 1001);
   // Display device details
   
    device.displayDetails();
#endif
    }



    std::cout  << "ok in the main";
    // The destructor will be called automatically when 'device' goes out of scope

    return 0;
}


//real need for destructor

#if 0



#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string deviceName;
    string serialNumber;
    int *manufacturerID;

public:
    // Constructor to initialize attributes
    MedicalDevice(const string& name, const string& serial, int manufID)
        : deviceName(name), serialNumber(serial) {

        manufacturerID =new int;  //observe dynamic allocation
        *manufacturerID=manufID;   
        cout << "MedicalDevice object created: " << deviceName << endl;
    }

    // Destructor
    ~MedicalDevice() {
        delete manufacturerID;
        cout << "MedicalDevice object destroyed: " << deviceName << endl;
    }

    // Method to display device details
    void displayDetails() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Manufacturer ID: " << manufacturerID << endl;
    }
};



//destructor  really needed think why .. without destructor memory allocated for manufacturerid inside
//the object would not be removed...
int main() {
    // Create a MedicalDevice object
    MedicalDevice device("Blood Pressure Monitor", "BP12345", 1001);
   // Display device details
    device.displayDetails();

    // The destructor will be called automatically when 'device' goes out of scope

    return 0;
}

#endif

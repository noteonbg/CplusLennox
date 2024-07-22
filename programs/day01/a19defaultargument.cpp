#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    int deviceID;
    string patientName;
    string status;

public:
    // Constructor with default argument for status
    MedicalDevice(int id, const string& name,
     const string& s = "Active")
        : deviceID(id), patientName(name), status(s) {}

    void displayInfo() {
        cout << "Device ID: " << deviceID << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Status: " << status << endl;
    }
};




int main() {
    // Creating MedicalDevice objects
    MedicalDevice device1(101, "John Doe");
    MedicalDevice device2(102, "Alice Smith", "Inactive");

    // Displaying device information
    cout << "Device 1 Info:" << endl;
    device1.displayInfo();

    cout << "\nDevice 2 Info:" << endl;
    device2.displayInfo();

    return 0;
}

#if 0


#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length = 1.0, double width = 1.0) {
    return length * width;
}

int main() {
    // Using default arguments
    double defaultArea = calculateRectangleArea();
    cout << "Area with default dimensions: " << defaultArea << endl;

    // Providing custom dimensions
    double customArea = calculateRectangleArea(5.0, 3.0);
    cout << "Area with custom dimensions: " << customArea << endl;

    return 0;
}


#endif 

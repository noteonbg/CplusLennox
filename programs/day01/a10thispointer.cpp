#include <iostream>
#include <string>
using namespace std;

#if 0
class MedicalDevice {
private:
    string deviceName;
    string serialNumber;
    int manufacturerID;

public:
    // Constructor to initialize attributes
    MedicalDevice(const string& name, const string& serial, int manufID)
        : deviceName(name), serialNumber(serial), manufacturerID(manufID) {}

    // Method to display device details
    void changeMedicalDeviceDetails(const string& deviceName,
     const string& serialNumber, int manufacturerID)
    {
            
                this->deviceName=deviceName;

    }
    
    void displayDetails() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Manufacturer ID: " << manufacturerID << endl;
    }
};

int main()
{
    MedicalDevice medicalDevice("Blood Pressure Monitor", "BP12345", 1001);
    MedicalDevice anotherMedicalDevice("Blood Pressure Monitor", "BP12345", 1001);
    medicalDevice.displayDetails();
    anotherMedicalDevice.displayDetails();


}

#endif


#if 1
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Calculate area using 'this' pointer
    double calculateArea() {
        return this->length * this->width;
    }

    Rectangle& setLength(int len)
    {
        length = len;
        int k=3;
        return *this;

    }



    Rectangle& setBreadth(int bre)
    {
                width =bre;
                return *this;
    }

    int getArea()
    {
        return width*length;

    }

    // Set dimensions using 'this' pointer
    void setDimensions(double length, double width) {
        this->length = length;
        this->width = width;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.setLength(4);
    Rectangle &temp = rect.setBreadth(5);






    int area = rect.setLength(3).setBreadth(4).getArea();
    std::cout << area;





/*


    cout << "Initial area: " << rect.calculateArea() << endl;

    // Change dimensions using 'this' pointer
    rect.setDimensions(7.0, 4.0);

    cout << "Updated area: " << rect.calculateArea() << endl;

*/
    return 0;
}

#endif




#if 0
int main() {
    // Create a MedicalDevice object dynamically (on the heap) using a pointer
    MedicalDevice* devicePtr = new MedicalDevice("Blood Pressure Monitor", "BP12345", 1001);

    // Access object attributes using the pointer
    cout << "Device details:" << endl;
    devicePtr->displayDetails();

    // Don't forget to delete the dynamically allocated object
    delete devicePtr;

    return 0;
}
#endif


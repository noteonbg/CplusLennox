#include <iostream>
using namespace std;

union MyUnion {
    int intValue;
    char charValue;
    float floatValue;
};


int main()
{
    std::string s ="hello";
    std::string s1 = std::move(s);
    std::cout  << "svalue" << s << "moved to " << s1;

}

int main1() {

    


    MyUnion u;

    // Assign values to union members
    u.intValue = 42;
    cout << "Integer value: " << u.intValue << endl;

    u.charValue = 'A';
    cout << "Character value: " << u.charValue << endl;

    u.floatValue = 3.14;
    cout << "Float value: " << u.floatValue << endl;

    // Accessing union members
    cout << "After float assignment, integer value: " << u.intValue << endl;

    return 0;
}




#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string deviceName;
    int deviceType; // 0: Thermometer, 1: Blood Pressure Monitor, 2: Pulse Oximeter

    union DeviceData {
        double temperature; // For thermometers
        int systolicBP;     // For blood pressure monitors
        double oxygenLevel; // For pulse oximeters
    } data;

public:
    MedicalDevice(const string& name, int type) : 
    deviceName(name), deviceType(type) {}

    void setData(double value) {
        switch (deviceType) {
            case 0: // Thermometer
                data.temperature = value;
                break;
            case 1: // Blood Pressure Monitor
                data.systolicBP = static_cast<int>(value);
                break;
            case 2: // Pulse Oximeter
                data.oxygenLevel = value;
                break;
        }
    }

    void displayData() {
        cout << "Device Name: " << deviceName << endl;
        switch (deviceType) {
            case 0:
                cout << "Temperature: " << data.temperature << " °C" << endl;
                break;
            case 1:
                cout << "Systolic BP: " << data.systolicBP << " mmHg" << endl;
                break;
            case 2:
                cout << "Oxygen Level: " << data.oxygenLevel << "%" << endl;
                break;
        }
    }
};

int main3() {
    MedicalDevice thermometer("Thermometer", 0);
    thermometer.setData(37.5);
    thermometer.displayData();

    MedicalDevice bpMonitor("Blood Pressure Monitor", 1);
    bpMonitor.setData(120);
    bpMonitor.displayData();

    MedicalDevice pulseOximeter("Pulse Oximeter", 2);
    pulseOximeter.setData(98.5);
    pulseOximeter.displayData();

    return 0;
}




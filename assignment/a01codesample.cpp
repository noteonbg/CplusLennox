#if 1


class Thermostat {
private:
    double currentTemperature;
    double desiredTemperature;
    bool heatingOn;
    bool coolingOn;

public:
    // Constructor
    Thermostat(double initTemp, double desiredTemp) 
        : currentTemperature(initTemp), desiredTemperature(desiredTemp), heatingOn(false), coolingOn(false) {}

    // Getters and Setters
    double getCurrentTemperature() const { return currentTemperature; }
    void setCurrentTemperature(double temp) { currentTemperature = temp; }

    double getDesiredTemperature() const { return desiredTemperature; }
    void setDesiredTemperature(double temp) { desiredTemperature = temp; }

    // Functions to control heating and cooling
    void turnHeatingOn() { heatingOn = true; }
    void turnHeatingOff() { heatingOn = false; }

    void turnCoolingOn() { coolingOn = true; }
    void turnCoolingOff() { coolingOn = false; }

    // Function to update the system based on the current and desired temperature
    void update() {
        if (currentTemperature < desiredTemperature) {
            turnHeatingOn();
            turnCoolingOff();
        } else if (currentTemperature > desiredTemperature) {
            turnHeatingOff();
            turnCoolingOn();
        } else {
            turnHeatingOff();
            turnCoolingOff();
        }
    }
};

class AirConditioner {
private:
    double currentTemperature;
    double targetTemperature;
    double powerUsage;
    bool isOn;

public:
    // Constructor
    AirConditioner(double currentTemp, double targetTemp)
        : currentTemperature(currentTemp), targetTemperature(targetTemp), powerUsage(0), isOn(false) {}

    // Getters and Setters
    double getCurrentTemperature() const { return currentTemperature; }
    void setCurrentTemperature(double temp) { currentTemperature = temp; }

    double getTargetTemperature() const { return targetTemperature; }
    void setTargetTemperature(double temp) { targetTemperature = temp; }

    double getPowerUsage() const { return powerUsage; }
    void setPowerUsage(double usage) { powerUsage = usage; }

    bool getIsOn() const { return isOn; }
    void turnOn() { isOn = true; }
    void turnOff() { isOn = false; }

    // Function to adjust temperature
    void adjustTemperature() {
        if (isOn) {
            if (currentTemperature > targetTemperature) {
                currentTemperature -= 0.5; // Cool down
            } else if (currentTemperature < targetTemperature) {
                currentTemperature += 0.5; // Heat up
            }
            powerUsage += 1.0; // Assume constant power usage when on
        } else {
            powerUsage = 0;
        }
    }
};

class VentilationSystem {
private:
    int fanSpeed; // 0 (off) to 10 (max)
    bool airPurifierOn;
    double airQuality;

public:
    // Constructor
    VentilationSystem(int speed, bool purifierOn, double quality)
        : fanSpeed(speed), airPurifierOn(purifierOn), airQuality(quality) {}

    // Getters and Setters
    int getFanSpeed() const { return fanSpeed; }
    void setFanSpeed(int speed) { fanSpeed = speed; }

    bool getAirPurifierOn() const { return airPurifierOn; }
    void turnAirPurifierOn() { airPurifierOn = true; }
    void turnAirPurifierOff() { airPurifierOn = false; }

    double getAirQuality() const { return airQuality; }
    void setAirQuality(double quality) { airQuality = quality; }

    // Function to control the fan speed based on air quality
    void controlFanSpeed() {
        if (airQuality < 50) {
            setFanSpeed(10); // Maximum speed
        } else if (airQuality < 100) {
            setFanSpeed(5); // Medium speed
        } else {
            setFanSpeed(0); // Turn off
        }
    }
};


#include <iostream>
using namespace std;

// Base Class
class HVACSystem {
protected:
    bool isOn;
    double powerUsage;

public:
    // Constructor
    HVACSystem() : isOn(false), powerUsage(0) {}

    // Virtual function to turn on the system
    virtual void turnOn() {
        isOn = true;
        cout << "HVAC System is now ON." << endl;
    }

    // Virtual function to turn off the system
    virtual void turnOff() {
        isOn = false;
        cout << "HVAC System is now OFF." << endl;
    }

    // Virtual function to update the system
    virtual void update() = 0; // Pure virtual function

    // Function to get power usage
    double getPowerUsage() const {
        return powerUsage;
    }
};

// Derived Class for Air Conditioner
class AirConditioner : public HVACSystem {
private:
    double currentTemperature;
    double targetTemperature;

public:
    // Constructor
    AirConditioner(double currentTemp, double targetTemp)
        : currentTemperature(currentTemp), targetTemperature(targetTemp) {}

    // Override turnOn function
    void turnOn() override {
        HVACSystem::turnOn();
        cout << "Air Conditioner is now ON." << endl;
    }

    // Override turnOff function
    void turnOff() override {
        HVACSystem::turnOff();
        cout << "Air Conditioner is now OFF." << endl;
    }

    // Override update function
    void update() override {
        if (isOn) {
            if (currentTemperature > targetTemperature) {
                currentTemperature -= 0.5; // Cool down
                powerUsage += 1.0;
            }
            cout << "Air Conditioner is cooling. Current Temperature: " << currentTemperature << endl;
        }
    }
};

// Derived Class for Heater
class Heater : public HVACSystem {
private:
    double currentTemperature;
    double targetTemperature;

public:
    // Constructor
    Heater(double currentTemp, double targetTemp)
        : currentTemperature(currentTemp), targetTemperature(targetTemp) {}

    // Override turnOn function
    void turnOn() override {
        HVACSystem::turnOn();
        cout << "Heater is now ON." << endl;
    }

    // Override turnOff function
    void turnOff() override {
        HVACSystem::turnOff();
        cout << "Heater is now OFF." << endl;
    }

    // Override update function
    void update() override {
        if (isOn) {
            if (currentTemperature < targetTemperature) {
                currentTemperature += 0.5; // Heat up
                powerUsage += 1.0;
            }
            cout << "Heater is heating. Current Temperature: " << currentTemperature << endl;
        }
    }
};

// Derived Class for Ventilation System
class VentilationSystem : public HVACSystem {
private:
    int fanSpeed;
    bool airPurifierOn;

public:
    // Constructor
    VentilationSystem(int speed, bool purifierOn)
        : fanSpeed(speed), airPurifierOn(purifierOn) {}

    // Override turnOn function
    void turnOn() override {
        HVACSystem::turnOn();
        cout << "Ventilation System is now ON." << endl;
    }

    // Override turnOff function
    void turnOff() override {
        HVACSystem::turnOff();
        cout << "Ventilation System is now OFF." << endl;
    }

    // Override update function
    void update() override {
        if (isOn) {
            cout << "Ventilation System is running at fan speed: " << fanSpeed << endl;
            if (airPurifierOn) {
                cout << "Air purifier is ON." << endl;
                powerUsage += 0.5;
            }
        }
    }
};

int main() {
    AirConditioner ac(30.0, 24.0);
    Heater heater(15.0, 22.0);
    VentilationSystem vs(5, true);

    ac.turnOn();
    ac.update();
    ac.turnOff();

    heater.turnOn();
    heater.update();
    heater.turnOff();

    vs.turnOn();
    vs.update();
    vs.turnOff();

    return 0;
}
#endif


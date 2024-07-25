// Thermostat.h
#ifndef THERMOSTAT_H
#define THERMOSTAT_H

class Thermostat {
public:
    virtual ~Thermostat() {}

    virtual float getCurrentTemperature() const = 0;
    virtual void setDesiredTemperature(float temperature) = 0;
    virtual bool isHeating() const = 0;
    virtual bool isCooling() const = 0;
};



#endif // THERMOSTAT_H

// BasicThermostat.h
#ifndef BASICTHERMOSTAT_H
#define BASICTHERMOSTAT_H

#include "Thermostat.h"

class BasicThermostat : public Thermostat {
private:
    float currentTemperature;
    float desiredTemperature;
    bool heating;
    bool cooling;

public:
    BasicThermostat(float initialTemperature)
        : currentTemperature(initialTemperature),
         desiredTemperature(initialTemperature), heating(false), cooling(false) {}

    void freakfrombase() override
    {

    }

    float getCurrentTemperature() const override  {
        return currentTemperature;
    }

    void setDesiredTemperature(float temperature) override {
        desiredTemperature = temperature;
        updateSystemState();
    }

    bool isHeating() const override {
        return heating;
    }

    bool isCooling() const override {
        return cooling;
    }

private:
    void updateSystemState() {
        if (currentTemperature < desiredTemperature) {
            heating = true;
            cooling = false;
        } else if (currentTemperature > desiredTemperature) {
            heating = false;
            cooling = true;
        } else {
            heating = false;
            cooling = false;
        }
    }
};

#endif // BASICTHERMOSTAT_H




#include <iostream>
#include "BasicThermostat.h"

int main() {
    BasicThermostat myThermostat(70.0f); // Initial temperature is 70.0°F

    std::cout << "Current Temperature: " << myThermostat.getCurrentTemperature() << "°F" << std::endl;

    myThermostat.setDesiredTemperature(75.0f);
    std::cout << "Desired Temperature set to: 75.0°F" << std::endl;

    if (myThermostat.isHeating()) {
        std::cout << "System is heating." << std::endl;
    } else if (myThermostat.isCooling()) {
        std::cout << "System is cooling." << std::endl;
    } else {
        std::cout << "System is idle." << std::endl;
    }

    return 0;
}






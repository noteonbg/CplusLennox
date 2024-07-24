// HVACSystem.h
#ifndef HVACSYSTEM_H
#define HVACSYSTEM_H

#include <string>

class HVACSystem {
public:
    void senddiag
    void getConnectedToNetwork()  {  }
    HVACSystem(const std::string& name) : systemName(name) {}
    virtual ~HVACSystem() {}

    virtual void turnOn() {
        systemState = "On";
    }

    virtual void turnOff() {
        systemState = "Off";
    }

    virtual std::string getStatus() const {
        return systemName + " is " + systemState;
    }

protected:
    std::string systemName;
    std::string systemState = "Off";
};

#endif // HVACSYSTEM_H


// HeatingSystem.h
#ifndef HEATINGSYSTEM_H
#define HEATINGSYSTEM_H

#include "HVACSystem.h"

class HeatingSystem : public HVACSystem {
public:
    HeatingSystem() : HVACSystem("Heating System") {}

    void setTemperature(float temperature) {
        desiredTemperature = temperature;
    }

    float getTemperature() const {
        return desiredTemperature;
    }

private:
    float desiredTemperature;
};

#endif // HEATINGSYSTEM_H
// CoolingSystem.h
#ifndef COOLINGSYSTEM_H
#define COOLINGSYSTEM_H

#include "HVACSystem.h"

class CoolingSystem : public HVACSystem {
public:
    CoolingSystem() : HVACSystem("Cooling System") {}

    void setTemperature(float temperature) {
        desiredTemperature = temperature;
    }

    float getTemperature() const {
        return desiredTemperature;
    }

private:
    float desiredTemperature;
};

#endif // COOLINGSYSTEM_H
// VentilationSystem.h
#ifndef VENTILATIONSYSTEM_H
#define VENTILATIONSYSTEM_H

#include "HVACSystem.h"

class VentilationSystem : public HVACSystem {
public:
    VentilationSystem() : HVACSystem("Ventilation System") {}

    void setAirflowRate(float rate) {
        airflowRate = rate;
    }

    float getAirflowRate() const {
        return airflowRate;
    }

private:
    float airflowRate;
};

#endif // VENTILATIONSYSTEM_H
#include <iostream>
#include "HeatingSystem.h"
#include "CoolingSystem.h"
#include "VentilationSystem.h"

int main() {
    HeatingSystem heater;
    CoolingSystem cooler;
    VentilationSystem ventilator;

    heater.turnOn();
    heater.setTemperature(72.0f);
    std::cout << heater.getStatus() << ", Temperature set to: " << heater.getTemperature() << "°F" << std::endl;

    cooler.turnOn();
    cooler.setTemperature(68.0f);
    std::cout << cooler.getStatus() << ", Temperature set to: " << cooler.getTemperature() << "°F" << std::endl;

    ventilator.turnOn();
    ventilator.setAirflowRate(500.0f);
    std::cout << ventilator.getStatus() << ", Airflow rate set to: " << ventilator.getAirflowRate() << " CFM" << std::endl;

    return 0;
}


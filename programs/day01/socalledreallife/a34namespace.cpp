#include <iostream>

namespace Cooling {
    const double MAX_TEMPERATURE = 25.0; // Maximum temperature for cooling in Celsius

    void startSystem() {
        std::cout << "Cooling system started." << std::endl;
    }

    void setTemperature(double temperature) {
        if (temperature > MAX_TEMPERATURE) {
            std::cout << "Temperature too high for cooling. Setting to maximum allowed: " 
                      << MAX_TEMPERATURE << "°C" << std::endl;
            temperature = MAX_TEMPERATURE;
        } else {
            std::cout << "Setting cooling temperature to " << temperature << "°C" << std::endl;
        }
    }
}

namespace Heating {
    const double MIN_TEMPERATURE = 18.0; // Minimum temperature for heating in Celsius

    void startSystem() {
        std::cout << "Heating system started." << std::endl;
    }

    void setTemperature(double temperature) {
        if (temperature < MIN_TEMPERATURE) {
            std::cout << "Temperature too low for heating. Setting to minimum allowed: " 
                      << MIN_TEMPERATURE << "°C" << std::endl;
            temperature = MIN_TEMPERATURE;
        } else {
            std::cout << "Setting heating temperature to " << temperature << "°C" << std::endl;
        }
    }
}

int main() {
    // Using the Cooling namespace
    Cooling::startSystem();
    Cooling::setTemperature(26.5);
    Cooling::setTemperature(22.0);

    // Using the Heating namespace
    Heating::startSystem();
    Heating::setTemperature(16.5);
    Heating::setTemperature(20.0);

    return 0;
}

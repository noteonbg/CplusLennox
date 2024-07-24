#include <iostream>
#include <vector>
#include <memory>

// Define an enum for different types of electronic components
enum ComponentType {
    RESISTOR,
    CAPACITOR,
    INDUCTOR,
    VOLTAGE_SOURCE
};

// interface for an electronic component
class Component {
public:
    virtual void simulate() const = 0;
    virtual ComponentType getType() const = 0;
    virtual ~Component() = default;
};

// Resistor implementation
class Resistor : public Component {
public:
    Resistor(double resistance) : resistance(resistance) {}
    void simulate() const override {
        std::cout << "Simulating Resistor with " << resistance << " ohms\n";
    }
    ComponentType getType() const override {
        return RESISTOR;
    }
private:
    double resistance;
};

// Capacitor implementation
class Capacitor : public Component {
public:
    Capacitor(double capacitance) : capacitance(capacitance) {}
    void simulate() const override {
        std::cout << "Simulating Capacitor with " << capacitance << " farads\n";
    }
    ComponentType getType() const override {
        return CAPACITOR;
    }
private:
    double capacitance;
};

// Inductor implementation
class Inductor : public Component {
public:
    Inductor(double inductance) : inductance(inductance) {}
    void simulate() const override {
        std::cout << "Simulating Inductor with " << inductance << " henrys\n";
    }
    ComponentType getType() const override {
        return INDUCTOR;
    }
private:
    double inductance;
};

// Derived class for a voltage source
class VoltageSource : public Component {
public:
    VoltageSource(double voltage) : voltage(voltage) {}
    void simulate() const override {
        std::cout << "Simulating Voltage Source with " << voltage << " volts\n";
    }
    ComponentType getType() const override {
        return VOLTAGE_SOURCE;
    }
private:
    double voltage;
};

// Function to simulate the components
void simulateComponents(const std::vector<std::shared_ptr<Component>>& components) {
    for (const auto& component : components) {
        component->simulate();
    }
}

int main() {
    // Create a vector to hold the components
    std::vector<std::shared_ptr<Component>> components;

    // Add components to the vector
    components.push_back(std::make_shared<Resistor>(1000));
    components.push_back(std::make_shared<Capacitor>(0.001));
    components.push_back(std::make_shared<Inductor>(0.01));
    components.push_back(std::make_shared<VoltageSource>(5));

    // Simulate the components
    simulateComponents(components);

    return 0;
}

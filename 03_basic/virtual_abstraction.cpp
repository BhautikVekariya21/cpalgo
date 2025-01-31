#include <iostream>
#include <vector>
#include <memory>

// Abstract interface for all smart devices
class SmartDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual std::string getStatus() const = 0;
    virtual void adjustSetting(int value) = 0;  // Unified control for all devices
    virtual ~SmartDevice() = default;
};

// Concrete implementation: Smart Light
class SmartLight : public SmartDevice {
private:
    bool isOn = false;
    int brightness = 0;  // Hidden internal state

    void updateHardware() {
        // Simulate hardware interaction (hidden from users)
        std::cout << "[Light] Setting brightness to " << brightness << "%\n";
    }

public:
    void turnOn() override {
        isOn = true;
        brightness = 50;  // Default brightness
        updateHardware();
    }

    void turnOff() override {
        isOn = false;
        brightness = 0;
        updateHardware();
    }

    void adjustSetting(int value) override {
        if (!isOn) {
            std::cout << "[Light] Cannot adjust - device is off\n";
            return;
        }
        brightness = std::clamp(value, 0, 100);
        updateHardware();
    }

    std::string getStatus() const override {
        return isOn ? "ON (Brightness: " + std::to_string(brightness) + "%)" : "OFF";
    }
};

// Concrete implementation: Thermostat
class Thermostat : public SmartDevice {
private:
    bool isOn = false;
    int temperature = 20;  // Hidden internal state

    void communicateWithHVAC() {
        // Simulate communication with HVAC system (hidden)
        std::cout << "[Thermostat] Setting temperature to " << temperature << "°C\n";
    }

public:
    void turnOn() override {
        isOn = true;
        communicateWithHVAC();
    }

    void turnOff() override {
        isOn = false;
        std::cout << "[Thermostat] HVAC system disabled\n";
    }

    void adjustSetting(int value) override {
        if (!isOn) {
            std::cout << "[Thermostat] Cannot adjust - device is off\n";
            return;
        }
        temperature = std::clamp(value, 10, 30);
        communicateWithHVAC();
    }

    std::string getStatus() const override {
        return isOn ? "ON (Temperature: " + std::to_string(temperature) + "°C)" : "OFF";
    }
};

// High-level controller (works with abstract interface)
class HomeController {
private:
    std::vector<std::unique_ptr<SmartDevice>> devices;

public:
    void addDevice(std::unique_ptr<SmartDevice> device) {
        devices.push_back(std::move(device));
    }

    void turnOffAllDevices() {
        for (const auto& device : devices) {
            device->turnOff();
        }
    }

    void showStatus() const {
        std::cout << "\n--- Home Status ---\n";
        for (const auto& device : devices) {
            std::cout << "Device: " << device->getStatus() << "\n";
        }
    }
};

int main() {
    HomeController controller;

    // Add devices (abstracted behind SmartDevice interface)
    controller.addDevice(std::make_unique<SmartLight>());
    controller.addDevice(std::make_unique<Thermostat>());

    // Use devices through abstraction
    SmartDevice* light = dynamic_cast<SmartLight*>(controller.getDevices()[0].get());
    SmartDevice* thermo = dynamic_cast<Thermostat*>(controller.getDevices()[1].get());

    light->turnOn();
    light->adjustSetting(75);
    
    thermo->turnOn();
    thermo->adjustSetting(23);

    controller.showStatus();
    controller.turnOffAllDevices();
    controller.showStatus();

    return 0;
}
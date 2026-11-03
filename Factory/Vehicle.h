#pragma once
#include <string>

class Vehicle {
protected:
    std::string type;
    int maxSpeed;

public:
    Vehicle(const std::string& type, int maxSpeed);
    virtual ~Vehicle() = default;
    std::string getType() const;
    int getMaxSpeed() const;
    virtual void drive() const = 0;
};
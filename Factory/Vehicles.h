#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    void drive() const override;
};

class Truck : public Vehicle {
public:
    Truck();
    void drive() const override;
};

class Bus : public Vehicle {
public:
    Bus();
    void drive() const override;
};
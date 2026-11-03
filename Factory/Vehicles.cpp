#include "Vehicles.h"
#include <iostream>

Car::Car() : Vehicle("Легковий автомобіль", 180) {}

void Car::drive() const {
    std::cout << "Автомобіль їде дорогою.\n";
}

Truck::Truck() : Vehicle("Вантажівка", 100) {}

void Truck::drive() const {
    std::cout << "Вантажівка перевозить вантаж.\n";
}

Bus::Bus() : Vehicle("Автобус", 120) {}

void Bus::drive() const {
    std::cout << "Автобус перевозить пасажирів.\n";
}
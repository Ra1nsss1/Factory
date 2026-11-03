#include "VehicleFactory.h"
#include "Vehicles.h"

Vehicle* VehicleFactory::create(int choice) {
    switch (choice) {
    case 1:
        return new Car();
    case 2:
        return new Truck();
    case 3:
        return new Bus();
    default:
        return nullptr;
    }
}
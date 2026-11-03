#include "Vehicle.h"
Vehicle::Vehicle(const std::string& type, int maxSpeed)
    : type(type), maxSpeed(maxSpeed) {
}
std::string Vehicle::getType() const {
    return type;
}
int Vehicle::getMaxSpeed() const {
    return maxSpeed;
}
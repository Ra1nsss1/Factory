#include "VehicleFactory.h"
#include <Windows.h>
#include <iostream>
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Оберіть транспорт:\n"
        << "1 - легковий автомобіль\n"
        << "2 - вантажівка\n"
        << "3 - автобус\n"
        << "Ваш вибір: ";
    int choice;
    if (!(std::cin >> choice)) {
        std::cout << "Помилка: введіть число від 1 до 3.\n";
        return 1;
    }
    // фабрика створює потрібний транспорт
    Vehicle* vehicle = VehicleFactory::create(choice);
    if (vehicle == nullptr) {
        std::cout << "Такого транспорту немає. Оберіть число від 1 до 3.\n";
        return 1;
    }
    std::cout << "Тип: " << vehicle->getType() << '\n'
        << "Максимальна швидкість: " << vehicle->getMaxSpeed()
        << " км/год\n";
    vehicle->drive();

    delete vehicle;
    return 0;
}
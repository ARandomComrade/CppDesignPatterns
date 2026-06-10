#include <iostream>
#include <string>

#include "car.h"

int main() {
    Car car1("Toyota", "Camry", "2020");
    car1.print_car();
    std::cout << "hello" << std::endl;
    return 0;
}


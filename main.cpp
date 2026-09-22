#include <iostream>
#include <string>

#include "car.hpp"
#include "singleton.hpp"

int main() {
    Car car1("Toyota", "Camry", "2020");
    car1.print_car();
    std::cout << "hello" << std::endl;
    Singleton::Instance()->setValue(4);
    std::cout << Singleton::Instance()->getValue() << std::endl;
    return 0;
}


#include "car.hpp"
#include <iostream>
#include <string>

Car::Car() {}
Car::Car(std::string make, std::string model, std::string year): make(make), model(model), year(year) {}
void Car::print_car() const {
    std::cout << Car::year << " " << Car::make << " " << Car::model << std::endl;
}

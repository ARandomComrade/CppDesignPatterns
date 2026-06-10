#pragma once

#include <string>

class Car {
    private:
        std::string make;
        std::string model;
        std::string year;
    public:
        Car();
        Car(std::string make, std::string model, std::string year);
        void print_car() const;
};

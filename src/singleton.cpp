#include "singleton.hpp"

Singleton* Singleton::instance = 0;

Singleton* Singleton::Instance() {
    if (instance == 0) {
        instance = new Singleton();
    }
    return instance;
}

Singleton::Singleton() {}
Singleton::~Singleton() {}
void Singleton::setValue(int val) {
    value = val;
}
int Singleton::getValue() {
    return value;
}

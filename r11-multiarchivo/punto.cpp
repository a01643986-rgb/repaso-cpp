#include "punto.h"
#include <iostream>

Punto::Punto() {
    std::cout << "Constructor" << std::endl;
    this->x = 0;
    this->y = 0;
}

Punto::Punto(int x, int y) {
    this->x = x;
    this->y = y;  
}

Punto::~Punto() {
    std::cout << "Destructor" << std::endl;
}

void Punto::imprimir() const {
    std::cout << "Punto: (" << x << ", " << y << ")" << std::endl;
}
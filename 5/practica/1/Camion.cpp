#include "Camion.h"

#include <iostream>

oop::Camion::Camion() : Vehiculo() {}

oop::Camion::~Camion() {}

void oop::Camion::Acelerar() { std::cout << "Camion acelerando" << std::endl; }

void oop::Camion::Frenar() { std::cout << "Camion frenando" << std::endl; }

#include "Auto.h"

#include <iostream>

oop::Auto::Auto() : Vehiculo(){};

oop::Auto::~Auto(){};

void oop::Auto::Acelerar() { std::cout << "Auto acelerando" << std::endl; }

void oop::Auto::Frenar() { std::cout << "Auto frenando" << std::endl; }

#include "Circulo.h"

const double oop::Circulo::Pi_ = 3.14159265358979323846;

oop::Circulo::Circulo(const double radio) { Radio_ = radio > 0 ? radio : 0; }

double oop::Circulo::Area() const { return Pi_ * Radio_ * Radio_; }

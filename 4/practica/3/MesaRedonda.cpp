#include "MesaRedonda.h"

oop::MesaRedonda::MesaRedonda(const double radio, const double altura,
                              const int color)
    : Circulo(radio), Mesa(altura)
{
    Color_ = color;
}

int oop::MesaRedonda::Color() const { return Color_; }

#include "Polar.h"

#include <cmath>

oop::Polar::Polar() : Complex() {}

oop::Polar::Polar(const double mod, const double phase)
    : Complex(mod * cos(phase), mod * sin(phase))
{
}

oop::Polar::Polar(const Complex &c) : Complex(c) {}
double oop::Polar::GetModulo() const { return Complex::abs(); }
double oop::Polar::GetFase() const { return Complex::arg(); }

void oop::Polar::SetModulo(const double mod)
{
    double phase(GetFase()), re(mod * phase), im(mod * phase);
    SetReal(re);
    SetImaginary(im);
}

void oop::Polar::SetFase(const double phase)
{
    double mod(GetModulo()), re(mod * phase), im(mod * phase);
    SetReal(re);
    SetImaginary(im);
}

std::ostream &operator<<(std::ostream &s, const oop::Polar &p)
{
    return (s << p.GetModulo() << " /_ " << p.GetFase());
}

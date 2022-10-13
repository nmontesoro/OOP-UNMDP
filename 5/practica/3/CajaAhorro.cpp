#include "CajaAhorro.h"

oop::CajaAhorro::CajaAhorro(const std::string titular, const double saldo,
                            const bool universitaria)
    : Cuenta(titular, saldo)
{
    universitaria_ = universitaria;
}

oop::CajaAhorro::~CajaAhorro() {}

double oop::CajaAhorro::Extraer(const double monto)
{
    double extraccion = 0;

    if (((universitaria_ && monto <= 100) || !universitaria_) &&
        saldo_ - monto >= 0)
    {
        extraccion = Cuenta::Extraer(monto);
    }

    return extraccion;
}


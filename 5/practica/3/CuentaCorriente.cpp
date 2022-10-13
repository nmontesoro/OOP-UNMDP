#include "CuentaCorriente.h"

oop::CuentaCorriente::CuentaCorriente(const std::string titular,
                                      const double saldo, const double tope)
    : Cuenta(titular, saldo)
{
    tope_ = tope;
}

oop::CuentaCorriente::~CuentaCorriente() {}

double oop::CuentaCorriente::Extraer(const double monto)
{
    double extraccion = 0;

    if (saldo_ - monto >= tope_)
    {
        extraccion = Cuenta::Extraer(monto);
    }

    return extraccion;
}


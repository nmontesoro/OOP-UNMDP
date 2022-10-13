#include "Banco.h"

oop::Banco::Banco() { cuentas_.reserve(10); }

oop::Banco::~Banco() {}

void oop::Banco::AgregarCuenta(const Cuenta &cuenta)
{
    cuentas_.push_back(cuenta);
}

double oop::Banco::CalcActivos() const
{
    size_t n = cuentas_.size();
    double activos = 0;

    for (size_t i = 0; i < n; i++)
    {
        activos += cuentas_[i].GetSaldo();
    }

    return activos;
}
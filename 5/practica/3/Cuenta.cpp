#include "Cuenta.h"

oop::Cuenta::Cuenta(const std::string &titular, const double saldo)
{
    titular_ = titular;
    saldo_ = saldo;
}

oop::Cuenta::~Cuenta() {}

std::string oop::Cuenta::GetTitular() const { return titular_; }

void oop::Cuenta::SetTitular(const std::string &titular) { titular_ = titular; }

double oop::Cuenta::GetSaldo() const { return saldo_; }

void oop::Cuenta::Depositar(const double monto) { saldo_ += monto; }

double oop::Cuenta::Extraer(const double monto)
{
    saldo_ -= monto;
    return monto;
}

std::ostream &oop::operator<<(std::ostream &s, const oop::Cuenta &c)
{
    return (s << c.GetTitular() << ": $" << c.GetSaldo());
}

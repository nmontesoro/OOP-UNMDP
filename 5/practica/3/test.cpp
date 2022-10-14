#include "Banco.h"
#include "CajaAhorro.h"
#include "CuentaCorriente.h"

int main()
{
    oop::Cuenta *ca1 = new oop::CajaAhorro("Juan", 100),
                *ca2 = new oop::CajaAhorro("Carlos", 200, true),
                *cc1 = new oop::CuentaCorriente("Alberto", 1500, -200);

    oop::Banco bank;

    bank.AgregarCuenta(ca1);
    bank.AgregarCuenta(ca2);
    bank.AgregarCuenta(cc1);

    std::cout << bank.CalcActivos() << std::endl;

    return 0;
}

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

    std::cout << bank.CalcActivos() << '\n';

    oop::Cuenta *universitaria = bank.GetCuenta(1);

    std::cout << *universitaria << '\n';

    universitaria->Extraer(200);

    std::cout << *universitaria << '\n';

    universitaria->Extraer(100);

    std::cout << *universitaria << '\n';

    std::cout << bank;

    return 0;
}

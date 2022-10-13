#include "Banco.h"
#include "CajaAhorro.h"
#include "CuentaCorriente.h"

int main()
{
    oop::Banco bank;
    oop::CajaAhorro ca1("Juan", 120), ca2("Pedro", 200, true);
    oop::CuentaCorriente cc("Carlos", 100, -200);

    std::cout << "Antes:\n-----------------------------------------------------"
                 "---------------------------\n";

    std::cout << ca1 << std::endl;
    std::cout << ca2 << std::endl;
    std::cout << cc << std::endl;

    ca1.Extraer(100);
    ca2.Extraer(500);
    cc.Extraer(200);

    std::cout << "\nDespues:\n-------------------------------------------------"
                 "-------------------------------\n";

    std::cout << ca1 << std::endl;
    std::cout << ca2 << std::endl;
    std::cout << cc << std::endl;

    bank.AgregarCuenta(ca1);
    bank.AgregarCuenta(ca2);
    bank.AgregarCuenta(cc);

    std::cout << "\n\nActivos: $" << bank.CalcActivos() << std::endl;

    return 0;
}

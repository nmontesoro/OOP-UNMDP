#include <memory>

#include "Usuario.h"

int main()
{
    auto user = std::make_shared<oop::Usuario>(oop::Usuario());

    user->SetNombre("Carlos");

    auto fac1 =
        std::make_shared<oop::Factura>(oop::Factura("Servicios", 14, 100000));

    user->AddFactura(fac1);
    oop::ReciboDePago rec = user->CalcPagos(0, 100);
    return 0;
}

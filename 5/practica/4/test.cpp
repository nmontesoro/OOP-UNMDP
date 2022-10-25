#include <iostream>
#include <memory>

#include "Factura.h"
#include "ReciboDePago.h"
#include "Usuario.h"

// void testFactura();
void testRecibo();
// void testUsuario();
void myPrint(std::string a, std::string b);

int main()
{
    // testFactura();
    testRecibo();
    // testUsuario();

    return 0;
}

void myPrint(std::string a, std::string b)
{
    std::cout << a << ": " << b << std::endl;
}

void testRecibo()
{
    /* Creo el objeto */
    oop::ReciboDePago rec =
        oop::ReciboDePago("Juan", 10000, 1000, nullptr, nullptr);

    if (rec.GetNombreContribuyente() != "Juan")
        myPrint("Recibo", "Nombre incorrecto");

    if (rec.GetMontoTotal() != 10005)
        myPrint("Recibo", "Monto total incorrecto");

    if (rec.GetMontoFijo() != 5)
        myPrint("Recibo", "Monto fijo incorrecto");

    if (rec.GetMontoVariable() != 1000)
        myPrint("Recibo", "Monto variable incorrecto");
}


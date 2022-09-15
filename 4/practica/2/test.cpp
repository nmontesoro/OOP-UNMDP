#include "Becario.h"

int main()
{
    oop::Fecha fnac(7, 7, 1998), fingest(1, 1, 2017), fingemp(1, 1, 2019);
    oop::Becario b1("John Doe", 12345, fnac, "Ing. en Computacion", fingest, 38,
                    float(7.84), "Estudiante", fingemp, 35000.0, "Primera", 3,
                    "Laboratorio 1", "Juan Carlos");

    std::cout << b1 << std::endl;

    return 0;
}

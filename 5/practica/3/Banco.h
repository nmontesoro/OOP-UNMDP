#ifndef LIB_BANCO
#define LIB_BANCO

#include <vector>

#include "Cuenta.h"

namespace oop
{
    class Banco
    {
    private:
        std::vector<Cuenta *> cuentas_;

    public:
        Banco();
        ~Banco();

        void AgregarCuenta(Cuenta *cuenta);
        double CalcActivos() const;
    };
}

#endif


#ifndef LIB_CAJAAHORRO
#define LIB_CAJAAHORRO

#include "Cuenta.h"

namespace oop
{
    class CajaAhorro : public virtual Cuenta
    {
    private:
        bool universitaria_;
        CajaAhorro();

    public:
        CajaAhorro(const std::string titular, const double saldo,
                   const bool universitaria = false);
        virtual ~CajaAhorro() override;

        virtual double Extraer(const double monto) override;
    };
}

#endif


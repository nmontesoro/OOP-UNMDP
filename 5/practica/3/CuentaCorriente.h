#ifndef LIB_CUENTACORRIENTE
#define LIB_CUENTACORRIENTE

#include "Cuenta.h"

namespace oop
{
    class CuentaCorriente : public virtual Cuenta
    {
    private:
        double tope_;
        CuentaCorriente();

    public:
        CuentaCorriente(const std::string titular, const double saldo,
                        const double tope);
        virtual ~CuentaCorriente() override;

        virtual double Extraer(const double monto) override;
    };
}

#endif


#ifndef LIB_CUENTA
#define LIB_CUENTA

#include <iostream>
#include <string>

namespace oop
{
    class Cuenta
    {
    protected:
        std::string titular_;
        double saldo_;
        Cuenta();

    public:
        Cuenta(const std::string &titular, const double saldo);
        virtual ~Cuenta();

        std::string GetTitular() const;
        void SetTitular(const std::string &titular);

        double GetSaldo() const;

        virtual void Depositar(const double monto);
        virtual double Extraer(const double monto);
    };

    std::ostream &operator<<(std::ostream &s, const Cuenta &c);
}

#endif


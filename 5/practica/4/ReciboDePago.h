#ifndef LIB_RECIBOPAGO
#define LIB_RECIBOPAGO
#include <memory>

#include "Factura.h"

namespace oop
{
    class ReciboDePago
    {
    private:
        std::string nombre_contribuyente_;
        double monto_total_;
        constexpr static double monto_fijo_ = 5;
        double monto_variable_;
        std::shared_ptr<Factura> primera_factura_;
        std::shared_ptr<Factura> ultima_factura_;
        ReciboDePago();

    public:
        ReciboDePago(const std::string nombre_contribuyente,
                     const double monto_total, const double monto_variable,
                     const std::shared_ptr<Factura> primera_factura,
                     const std::shared_ptr<Factura> ultima_factura);

        std::string GetNombreContribuyente() const;
        double GetMontoTotal() const;
        double GetMontoFijo() const;
        double GetMontoVariable() const;
        const Factura &GetPrimeraFacturaConsiderada() const;
        const Factura &GetUltimaFacturaConsiderada() const;
    };
}

#endif


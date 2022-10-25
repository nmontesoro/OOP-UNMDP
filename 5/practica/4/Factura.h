#ifndef LIB_FACTURA
#define LIB_FACTURA
#include <string>

namespace oop
{
    class Factura
    {
    private:
        std::string detalle_;
        int numero_;
        double monto_;
        double pago_;
        bool calculado_;
        Factura();

    public:
        Factura(const std::string detalle, const int numero,
                const double monto);
        std::string GetDetalle() const;
        int GetNumeroFactura() const;
        double GetMontoFacturado() const;
    };
}

#endif

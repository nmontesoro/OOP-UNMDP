#include "Factura.h"

oop::Factura::Factura(const std::string detalle, const int numero,
                      const double monto)
{
    detalle_ = detalle;
    numero_ = numero;
    monto_ = monto;
}

std::string oop::Factura::GetDetalle() const { return detalle_; }

int oop::Factura::GetNumeroFactura() const { return numero_; }

double oop::Factura::GetMontoFacturado() const { return monto_; }

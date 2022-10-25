#include "ReciboDePago.h"

oop::ReciboDePago::ReciboDePago(const std::string nombre_contribuyente,
                                const double monto_total,
                                const double monto_variable,
                                const std::shared_ptr<Factura> primera_factura,
                                const std::shared_ptr<Factura> ultima_factura)
{
    nombre_contribuyente_ = nombre_contribuyente;
    monto_total_ = monto_total;
    monto_variable_ = monto_variable;
    primera_factura_ = primera_factura;
    ultima_factura_ = ultima_factura;
}

std::string oop::ReciboDePago::GetNombreContribuyente() const
{
    return nombre_contribuyente_;
}

double oop::ReciboDePago::GetMontoTotal() const
{
    return monto_total_ + monto_fijo_;
}

double oop::ReciboDePago::GetMontoFijo() const { return monto_fijo_; }

double oop::ReciboDePago::GetMontoVariable() const { return monto_variable_; }

const oop::Factura &oop::ReciboDePago::GetPrimeraFacturaConsiderada() const
{
    const Factura &pfc = *primera_factura_;
    return pfc;
}

const oop::Factura &oop::ReciboDePago::GetUltimaFacturaConsiderada() const
{
    const Factura &pfc = *primera_factura_;
    return pfc;
}


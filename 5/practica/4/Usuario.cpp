#include "Usuario.h"

#include <stdexcept>

oop::Usuario::Usuario()
{
    nombre_ = "";
    categoria_ = oop::CategoriaUsuario::Limitado;
    facturas_.reserve(10);
    ultimo_numero_factura_ = -1;
}

oop::Usuario::Usuario(const std::string nombre,
                      const oop::CategoriaUsuario categoria)
{
    nombre_ = nombre;
    categoria_ = categoria;
    facturas_.reserve(10);
    ultimo_numero_factura_ = -1;
}

std::string oop::Usuario::GetNombre() const { return nombre_; }

oop::CategoriaUsuario oop::Usuario::GetCategoria() const { return categoria_; }

oop::ReciboDePago oop::Usuario::CalcPagos(const int primera_factura,
                                          const int ultima_factura) const
{
    size_t n = facturas_.size();

    if (primera_factura < 0 || ultima_factura <= 0 || n == 0)
    {
        throw std::invalid_argument("Factura invalida o vector vacio");
    }
    else
    {
        std::shared_ptr<oop::Factura> pfc = facturas_.at(0), ufc = pfc, fa;
        int num_factura;
        double monto_variable = 0, monto_total = 0, monto_factura = 0;

        for (size_t i = 0; i < n; i++)
        {
            fa = facturas_.at(i);
            num_factura = fa->GetNumeroFactura();

            if (num_factura >= primera_factura && num_factura <= ultima_factura)
            {
                if (num_factura < pfc->GetNumeroFactura())
                {
                    pfc = fa;
                }

                if (num_factura > ufc->GetNumeroFactura())
                {
                    ufc = fa;
                }

                monto_factura = fa->GetMontoFacturado();

                if (categoria_ == oop::CategoriaUsuario::Limitado)
                {
                    monto_variable += 0.005 * monto_factura;
                }
                else
                {
                    if (monto_factura >= 5000)
                    {
                        monto_variable += 0.5 * monto_factura;
                    }

                    if (categoria_ == oop::CategoriaUsuario::Extendido)
                    {
                        monto_variable += 10;
                    }
                }
                monto_total += monto_variable;
            }
        }

        oop::ReciboDePago recibo(nombre_, monto_total, monto_variable, pfc,
                                 ufc);
        return recibo;
    }
}

void oop::Usuario::SetNombre(const std::string nombre) { nombre_ = nombre; }

void oop::Usuario::SetCategoria(const oop::CategoriaUsuario categoria)
{
    categoria_ = categoria;
}

void oop::Usuario::AddFactura(const std::shared_ptr<oop::Factura> factura)
{
    // TODO: Check facturas duplicadas
    facturas_.push_back(factura);
}

void oop::Usuario::RemoveFactura(const int i)
{
    facturas_.erase(facturas_.begin() + i);
}


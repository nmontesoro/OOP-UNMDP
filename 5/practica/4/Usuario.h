#ifndef LIB_USUARIO
#define LIB_USUARIO

#include <vector>

#include "CategoriaUsuario.h"
#include "Factura.h"
#include "ReciboDePago.h"

namespace oop
{
    class Usuario
    {
    private:
        std::string nombre_;
        CategoriaUsuario categoria_;
        std::vector<std::shared_ptr<Factura>> facturas_;
        int ultimo_numero_factura_;

    public:
        Usuario();
        Usuario(const std::string nombre, const CategoriaUsuario categoria);

        std::string GetNombre() const;
        CategoriaUsuario GetCategoria() const;
        ReciboDePago CalcPagos(const int primera_factura,
                               const int ultima_factura) const;

        void SetNombre(const std::string nombre);
        void SetCategoria(const CategoriaUsuario categoria);
        void AddFactura(const std::shared_ptr<oop::Factura> factura);
        void RemoveFactura(const int i);
    };
}

#endif


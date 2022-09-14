#ifndef LIB_EMPLEADO
#define LIB_EMPLEADO

#include <iostream>
#include <string>

#include "Persona.h"

namespace oop
{
    class Empleado : public virtual Persona
    {
    public:
        Empleado();
        Empleado(const std::string &name, const unsigned int doc,
                 const Fecha &fnac, const std::string &categoria,
                 const Fecha &fing, float sueldo);
        virtual ~Empleado() override;

        void vSetCategoria(const std::string &carr);
        bool vSetIngreso(const Fecha &date);
        bool vSetIngreso(const int dd, const int mm, const int aa);
        void fSetSueldo(const float prom);

        std::string stGetCategoria() const;
        Fecha fechaGetIngreso() const;
        float fGetSueldo() const;

        friend std::ostream &operator<<(std::ostream &os, Empleado &est);

    protected:
        std::string stCategoria;
        Fecha fechaIngreso;
        float fSueldo;
    };
}

std::ostream &operator<<(std::ostream &os, oop::Empleado &est);

#endif

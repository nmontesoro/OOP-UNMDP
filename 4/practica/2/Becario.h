#ifndef LIB_BECARIO
#define LIB_BECARIO

#include <string>

#include "Empleado.h"
#include "Estudiante.h"

namespace oop
{
    class Becario final : public virtual Estudiante, public virtual Empleado
    {
        Becario();
        Becario(const std::string &name, const unsigned int doc,
                const Fecha &fnac, const std::string carr, const Fecha &fing,
                const int cant, const float prom, const std::string cat,
                const Fecha &feing, const float su, const std::string tipo,
                const int dur, const std::string lab, const std::string dir);
        virtual ~Becario() final;

        void vSetTipo(const std::string &carr);
        void vSetDuracion(const int cant);
        void vSetLaboratorio(const std::string &lab);

        std::string stGetTipo() const;
        int iGetDuracion() const;
        std::string stGetLaboratorio() const;
        std::string stGetDirector() const;

    protected:
        std::string sTipo;
        int iDuracion;
        std::string stLaboratorio;
        std::string stDirector;
    };
}

#endif
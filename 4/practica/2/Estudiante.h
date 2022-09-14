#ifndef LIB_ESTUDIANTE
#define LIB_ESTUDIANTE

#include "Persona.h"

namespace oop
{
    class Estudiante : public Persona
    {
    public:
        Estudiante();
        Estudiante(const std::string &name, unsigned int doc, const Fecha &fnac,
                   const std::string &carrera, const Fecha &fing, int cant);
        ~Estudiante();

        void vSetCarrera(const std::string &carr);
        bool vSetIngreso(const Fecha &date);
        bool vSetIngreso(const int dd, const int mm, const int aa);
        void vSetMaterias(const int cant);

        std::string stGetCarrera() const;
        Fecha fechaGetIngreso() const;
        int iGetMaterias() const;
        float GetPromedio() const;

    protected:
        std::string stCarrera;
        int iMaterias;
        Fecha fechaIngreso;
        float fPromedio;
    };
}

#endif

#include "Estudiante.h"

oop::Estudiante::Estudiante() : Persona() {}

oop::Estudiante::Estudiante(const std::string &name, unsigned int doc,
                            const Fecha &fnac, const std::string &carrera,
                            const Fecha &fing, int cant)
    : Persona(name, doc, fnac)

{
    stCarrera = carrera;
    fechaIngreso = fing;
    iMaterias = cant >= 0 ? cant : 0;
    fPromedio = 0;
}

void oop::Estudiante::vSetCarrera(const std::string &carr) { stCarrera = carr; }

bool oop::Estudiante::vSetIngreso(const Fecha &date)
{
    fechaIngreso = date;
    return true;
}

bool oop::Estudiante::vSetIngreso(const int dd, const int mm, const int aa)
{
    bool result = false;
    Fecha fecha(dd, mm, aa);

    if (fecha.Day == dd && fecha.Month == mm && fecha.Year == aa)
    {
        result = true;
    }

    return result;
}

void oop::Estudiante::vSetMaterias(const int cant)
{
    iMaterias = cant >= 0 ? cant : 0;
}

std::string oop::Estudiante::stGetCarrera() const { return stCarrera; }

oop::Fecha oop::Estudiante::fechaGetIngreso() const { return fechaIngreso; }

int oop::Estudiante::iGetMaterias() const { return iMaterias; }

float oop::Estudiante::GetPromedio() const { return fPromedio; }

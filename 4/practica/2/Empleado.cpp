#include "Empleado.h"

oop::Empleado::Empleado() : Persona() {}

oop::Empleado::Empleado(const std::string &name, const unsigned int doc,
                        const Fecha &fnac, const std::string &categoria,
                        const Fecha &fing, float sueldo)
    : Persona(name, doc, fnac)
{
    stCategoria = categoria;
    fechaIngreso = fing;
    fSueldo = sueldo;
}

void oop::Empleado::vSetCategoria(const std::string &carr)
{
    stCategoria = carr;
}

bool oop::Empleado::vSetIngreso(const oop::Fecha &date)
{
    fechaIngreso = date;
    return true;
}

bool oop::Empleado::vSetIngreso(const int dd, const int mm, const int aa)
{
    bool result = false;
    Fecha fecha(dd, mm, aa);

    if (fecha.Day == dd && fecha.Month == mm && fecha.Year == aa)
    {
        fechaIngreso = fecha;
        result = true;
    }

    return result;
}

void oop::Empleado::fSetSueldo(const float prom) { fSueldo = prom; }

std::string oop::Empleado::stGetCategoria() const { return stCategoria; }

oop::Fecha oop::Empleado::fechaGetIngreso() const { return fechaIngreso; }

float oop::Empleado::fGetSueldo() const { return fSueldo; }

std::ostream &oop::operator<<(std::ostream &os, oop::Empleado &est)
{
    return (os << est.Name_);
}
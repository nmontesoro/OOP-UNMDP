#include "Becario.h"

oop::Becario::Becario() : Estudiante(), Empleado() {}

oop::Becario::Becario(const std::string &name, const unsigned int doc,
                      const oop::Fecha &fnac, const std::string carr,
                      const oop::Fecha &fing, const int cant, const float prom,
                      const std::string cat, const oop::Fecha &feing,
                      const float su, const std::string tipo, const int dur,
                      const std::string lab, const std::string dir)
    : Estudiante(name, doc, fnac, carr, fing, cant),
      Empleado(name, doc, fnac, cat, feing, su)
{
    sTipo = tipo;
    iDuracion = dur;
    stLaboratorio = lab;
    stDirector = dir;
}

void oop::Becario::vSetTipo(const std::string &carr) { sTipo = carr; }

void oop::Becario::vSetDuracion(const int cant) { iDuracion = cant; }

void oop::Becario::vSetLaboratorio(const std::string &lab)
{
    stLaboratorio = lab;
}

std::string oop::Becario::stGetTipo() const { return sTipo; }

int oop::Becario::iGetDuracion() const { return iDuracion; }

std::string oop::Becario::stGetLaboratorio() const { return stLaboratorio; }

std::string oop::Becario::stGetDirector() const { return stDirector; }

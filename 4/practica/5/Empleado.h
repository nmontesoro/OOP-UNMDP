#ifndef LIB_EMPLEADO
#define LIB_EMPLEADO

#include <iostream>
#include <string>

namespace oop
{
    class Empleado
    {
    private:
        std::string Nombre_;
        double HorasTrabajadas_;
        int TipoEmpleado_;
        int AnosAntiguedad_;
        int CantHijos_;
        bool Casado_;
        static const double SalarioPorHora_[];
        static const double SalarioAntiguedad_[];
        static const double SalarioFamiliar_;
        static const double MontoPareja_;
        Empleado();

    public:
        enum TipoEmpleado
        {
            PlantaPermanente = 0,
            Temporario,
            Gerente
        };

        Empleado(const std::string &nombre, const TipoEmpleado tipo,
                 double horas, int anos, int hijos, bool casado);

        std::string GetNombre() const;
        double GetHorasTrabajadas() const;
        int GetTipoEmpleado() const;
        int GetAnosAntiguedad() const;
        int GetCantHijos() const;
        bool GetCasado() const;
        double GetSalarioPorHora() const;
        double GetSalarioAntiguedad() const;
        double GetSalarioFamiliar() const;
        double GetPagoTotal() const;

        void SetNombre(const std::string &nombre);
        void SetHorasTrabajadas(const double horas);
        void SetTipoEmpleado(const TipoEmpleado tipo);
        void SetAnosAntiguedad(const int anos);
        void SetCantHijos(const int hijos);
        void SetCasado(const bool casado);
    };
}

std::ostream &operator<<(std::ostream &s, const oop::Empleado &empl);

#endif

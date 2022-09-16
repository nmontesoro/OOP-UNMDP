#ifndef LIB_EMPRESA
#define LIB_EMPRESA

#include <iostream>
#include <vector>

#include "Empleado.h"

namespace oop
{
    class Empresa
    {
    private:
        std::vector<Empleado> Empleados_;

    public:
        double MontoTotal(void);

        void AddEmpleado(Empleado &empl);

        friend std::ostream &operator<<(std::ostream &s, const Empresa &emp);
    };

    std::ostream &operator<<(std::ostream &s, const Empresa &emp);
}

#endif

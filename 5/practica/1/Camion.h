#ifndef LIB_CAMION
#define LIB_CAMION

#include "Vehiculo.h"

namespace oop
{
    class Camion : Vehiculo
    {
    public:
        Camion();
        virtual ~Camion();

        virtual void Acelerar() final;
        virtual void Frenar() final;
    };
}

#endif

#ifndef LIB_AUTO
#define LIB_AUTO

#include "Vehiculo.h"

namespace oop
{
    class Auto : Vehiculo
    {
    public:
        Auto();
        virtual ~Auto();

        virtual void Acelerar() final;
        virtual void Frenar() final;
    };
}

#endif

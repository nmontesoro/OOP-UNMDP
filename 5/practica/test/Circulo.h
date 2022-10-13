#ifndef LIB_CIRCULO
#define LIB_CIRCULO

#include "Figura.h"

namespace oop
{
    class Circulo : public virtual Figura
    {
    public:
        Circulo();
        virtual ~Circulo() override;
    };
}

#endif

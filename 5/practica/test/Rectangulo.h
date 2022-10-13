#ifndef LIB_RECTANGULO
#define LIB_RECTANGULO

#include "Figura.h"

namespace oop
{
    class Rectangulo : public virtual Figura
    {
    public:
        Rectangulo();
        virtual ~Rectangulo() override;
    };
}

#endif


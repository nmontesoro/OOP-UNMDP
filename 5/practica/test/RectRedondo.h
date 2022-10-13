#ifndef LIB_RECTREDONDO
#define LIB_RECTREDONDO

#include "Circulo.h"
#include "Rectangulo.h"

namespace oop
{
    class RectRedondo final : public virtual Circulo, public virtual Rectangulo
    {
    public:
        RectRedondo();
        virtual ~RectRedondo() override final;
    };
}

#endif

#ifndef LIB_MESAREDONDA
#define LIB_MESAREDONDA

#include "Circulo.h"
#include "Mesa.h"

namespace oop
{
    class MesaRedonda : public virtual Circulo, public virtual Mesa
    {
    private:
        int Color_;
        MesaRedonda();

    public:
        MesaRedonda(const double radio, const double altura, const int color);
        int Color() const;
    };
}

#endif

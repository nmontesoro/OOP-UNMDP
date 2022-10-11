#ifndef LIB_VEHICULO
#define LIB_VEHICULO

namespace oop
{
    class Vehiculo
    {
    public:
        Vehiculo();
        virtual ~Vehiculo() = 0;

        virtual void Acelerar() = 0;
        virtual void Frenar() = 0;
    };
}

#endif

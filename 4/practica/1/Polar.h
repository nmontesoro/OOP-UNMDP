#ifndef LIB_POLAR
#define LIB_POLAR

/*
 * Varía de la especificación de la cátedra para ser consistente con el
 * código ya escrito.
 * Los nombres de los métodos son los especificados.
 */

#include <iostream>

/* Esto es horrible, pero no estaba pensado para ser heredada */
#include "../../../3/practica/1/Complex.h"

namespace oop
{
    class Polar : public Complex
    {
    public:
        Polar();
        Polar(const double mod, const double phase);
        Polar(const Complex &c);

        double GetModulo() const;
        double GetFase() const;

        void SetModulo(const double mod);
        void SetFase(const double phase);
    };
}

std::ostream &operator<<(std::ostream &s, const oop::Polar &p);

#endif

#ifndef LIB_FECHA
#define LIB_FECHA

#include <iostream>

namespace oop
{
    class Fecha
    {
    public:
        int Day;
        int Month;
        int Year;

        Fecha(const int d = 1, const int m = 1, const int a = 1970);
    };

    std::ostream &operator<<(std::ostream &s, const oop::Fecha &f);
}

#endif

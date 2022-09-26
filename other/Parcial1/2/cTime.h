#ifndef LIB_TIME
#define LIB_TIME

#include <iostream>

namespace oop
{
    class cTime
    {
    private:
        unsigned int hora;
        unsigned int minuto;
        unsigned int segundo;

    public:
        cTime(const unsigned int h = 0, const unsigned int m = 0,
              const unsigned int s = 0);
        void setTiempo(const unsigned int h, const unsigned int m,
                       const unsigned int s);
        cTime getTiempo() const;

        void incrementarTiempo(unsigned int m);

        friend std::ostream &operator<<(std::ostream &s, const cTime &t);
    };

    std::ostream &operator<<(std::ostream &s, const cTime &t);
}

#endif

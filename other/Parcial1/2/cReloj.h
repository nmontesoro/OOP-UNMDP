#ifndef LIB_RELOJ
#define LIB_RELOJ

#include <string>

#include "cTime.h"

namespace oop
{
    class cReloj
    {
    private:
        cTime time;
        char *marca;

    public:
        cReloj(const unsigned int hora = 0, const unsigned int minuto = 0,
               const unsigned int segundo = 0);
        cReloj(const cTime &original);

        void setTiempo(const unsigned int hora, const unsigned int minuto,
                       const unsigned int segundo);
        void setMarca(const char *nueva_marca);

        cTime getTiempo() const;
    };
}

#endif

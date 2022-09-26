#include "cReloj.h"

oop::cReloj::cReloj(const unsigned int hora, const unsigned int minuto,
                    const unsigned int segundo)
{
    setTiempo(hora, minuto, segundo);
    setMarca("");
}

oop::cReloj::cReloj(const cTime &original) { time = original; }

void oop::cReloj::setTiempo(const unsigned int hora, const unsigned int minuto,
                            const unsigned int segundo)
{
    time = cTime(hora, minuto, segundo);
}

void oop::cReloj::setMarca(const char *nueva_marca)
{
    marca = const_cast<char *>(nueva_marca);
}

oop::cTime oop::cReloj::getTiempo() const { return time.getTiempo(); }

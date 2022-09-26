#include "cTime.h"

oop::cTime::cTime(const unsigned int h, const unsigned int m,
                  const unsigned int s)
{
    setTiempo(h, m, s);
}

void oop::cTime::setTiempo(const unsigned int h, const unsigned int m,
                           const unsigned int s)
{
    // TODO: Agregar checks
    this->hora = h;
    this->minuto = m;
    this->segundo = s;
}

oop::cTime oop::cTime::getTiempo() const { return cTime(*this); }

std::ostream &oop::operator<<(std::ostream &s, const cTime &t)
{
    return (s << t.hora << ":" << t.minuto << ":" << t.segundo);
}

void oop::cTime::incrementarTiempo(unsigned int m)
{
    setTiempo(this->hora, this->minuto + m, this->segundo);
}

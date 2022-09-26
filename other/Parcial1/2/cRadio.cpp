#include "cRadio.h"

oop::cRadio::cRadio(const float freq, const TipoDeBanda tipo, const bool pren)
{
    this->frecuencia = freq;
    setBanda(tipo);
    setPrendido(pren);
}

void oop::cRadio::setPrendido(const bool pren) { this->prendido = pren; }

void oop::cRadio::setBanda(const TipoDeBanda tipo) { this->banda = tipo; }

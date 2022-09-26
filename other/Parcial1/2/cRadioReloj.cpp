#include "cRadioReloj.h"

oop::cRadioReloj::cRadioReloj(const cTime &reloj, const cTime &alarm,
                              const TipoAlarma type, const bool pren,
                              const cRadio &rad)
    : cRadio(rad), cReloj(reloj)
{
    this->tipo = type;
    this->alarma = alarm;
    this->prendido = pren;
}

void oop::cRadioReloj::setPrendido(const bool pren) { this->prendido = pren; }

void oop::cRadioReloj::setAlarma(const unsigned int hora,
                                 const unsigned int minuto,
                                 const unsigned int segundo)
{
    this->alarma = cTime(hora, minuto, segundo);
}

void oop::cRadioReloj::incrementarTiempo() { alarma.incrementarTiempo(15); }

bool oop::cRadioReloj::verificarAlarma() const { return prendido; }

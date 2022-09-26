#ifndef LIB_RADIORELOJ
#define LIB_RADIORELOJ

#include "cRadio.h"
#include "cReloj.h"

namespace oop
{
    enum TipoAlarma
    {
        Musica,
        Timbre
    };
    class cRadioReloj : public cRadio, public cReloj
    {
    private:
        cTime alarma;
        TipoAlarma tipo;
        bool prendido;

    public:
        cRadioReloj(const cTime &reloj, const cTime &alarma = cTime(),
                    const TipoAlarma type = Timbre, const bool pren = false,
                    const cRadio &rad = cRadio(float(100.1), FM, false));
        void setPrendido(const bool pren);
        void setAlarma(const unsigned int hora = 0,
                       const unsigned int minuto = 0,
                       const unsigned int segundo = 0);
        void incrementarTiempo();
        bool verificarAlarma() const;
    };
}

#endif

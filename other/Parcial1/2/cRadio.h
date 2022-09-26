#ifndef LIB_RADIO
#define LIB_RADIO

namespace oop
{
    enum TipoDeBanda
    {
        AM,
        FM
    };

    class cRadio
    {
    private:
        float frecuencia;
        TipoDeBanda banda;
        bool prendido;

    public:
        cRadio(const float freq = 95.5, const TipoDeBanda tipo = FM,
               const bool pren = false);
        // cRadio(const cRadio &original);
        void setPrendido(const bool pren);
        void setBanda(const TipoDeBanda tipo);
    };
}

#endif

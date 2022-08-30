#ifndef LIB_TIEMPO
#define LIB_TIEMPO

#include <regex>

namespace oop
{
    class Tiempo
    {
    private:
        int hora_;
        int minutos_;
        int segundos_;
        static const std::regex tiempo_regex_;
        static bool matchTiempoRegex(std::string input, int &h, int &m, int &s);
        static bool validarTiempo(int h, int m, int s);

    public:
        /* ----- Constructores / destructores */

        /**
         * @brief Crea una nueva instancia de Tiempo
         */
        Tiempo();

        /* ----- Setters ----- */

        /**
         * @brief Setea la hora del objeto
         * @param hora Hora
         */
        void setHora(int hora);

        /**
         * @brief Setea los minutos del objeto
         * @param minutos Minutos
         */
        void setMinutos(int minutos);

        /**
         * @brief Setea los segundos del objeto
         * @param segundos Segundos
         */
        void setSegundos(int segundos);

        /**
         * @brief Setea todos los datos del objeto
         * @param hora Hora
         * @param minutos Minutos
         * @param segundos Segundos
         */
        void setDatos(int hora, int minutos, int segundos);

        /* ----- Getters ----- */

        /**
         * @brief Devuelve la hora del objeto
         * @return La hora del objeto
         */
        int getHora();

        /**
         * @brief Devuelve los minutos del objeto
         * @return Los minutos del objeto
         */
        int getMinutos();

        /**
         * @brief Devuelve los segundos del objeto
         * @return Los segundos del objeto
         */
        int getSegundos();

        /* ----- Otros métodos ----- */

        /**
         * @brief Toma los datos del objeto desde stdin
         */
        void ingresarDatos();

        /**
         * @brief Muestra los datos del objeto en formato estándar
         */
        void muestra_fmt_estandard();

        /**
         * @brief Muestra los datos del objeto en formato universal
         */
        void muestra_fmt_universal();
    };
}

#endif

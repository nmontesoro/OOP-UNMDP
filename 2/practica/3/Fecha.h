#ifndef LIB_FECHA
#define LIB_FECHA

#include <regex>

using namespace std;

namespace oop
{
    class Fecha
    {
    private:
        int day;
        int month;
        int year;
        static const regex fecha_regex;
        static const char *months[];

        static bool matchFechaRegex(string input, int &day, int &month,
                                    int &year);

    public:
        /* ----- Constructor / Destructor ----- */
        Fecha();

        /* ----- Setters ----- */

        /**
         * @brief Establece la fecha del objeto
         * @param day Día
         * @param month Mes
         * @param year Año
         */
        void setFecha(int day, int month, int year);

        /**
         * @brief Establece el día del objeto (previa validación)
         * @param day Día
         */
        void setDay(int day);

        /**
         * @brief Establece el mes del objeto (previa validación)
         * @param month
         */
        void setMonth(int month);

        /**
         * @brief Establece el año del objeto (previa validación)
         * @param year
         */
        void setYear(int year);

        /* ----- Otros métodos ----- */

        /**
         * @brief Toma el input desde stdin y lo vuelca al objeto
         */
        void ingresarFecha();

        /**
         * @brief Imprime la fecha del objeto en formato latinoamericano
         */
        void imprimir_la();

        /**
         * @brief Imprime la fecha del objeto en formato estadounidense
         */
        void imprimir_us();

        /**
         * @brief Imprime la fecha del objeto con letras
         */
        void imprimir_letras();

        /**
         * @brief Devuelve el nombre del mes correspondiente a este
         * objeto
         * @return Nombre del mes correspondiente a este objeto
         */
        char *mesLetras();

        /**
         * @brief Comprueba si la fecha proporcionada es válida. No
         * soporta años bisiestos.
         * @return True si es válida, falso en caso contrario
         */
        static bool validarFecha(int day, int month, int year);
    };
};

#endif
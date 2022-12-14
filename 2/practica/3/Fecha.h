#ifndef LIB_FECHA
#define LIB_FECHA

#include <iostream>
#include <regex>

namespace oop
{
    class Fecha
    {
    private:
        int day_;
        int month_;
        int year_;
        static const std::regex fecha_regex_;
        static const char *months_[];

        static bool matchFechaRegex(std::string input, int &day, int &month,
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
         * @param month Mes
         */
        void setMonth(int month);

        /**
         * @brief Establece el año del objeto (previa validación)
         * @param year Año
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

        friend std::ostream &operator<<(std::ostream &co, Fecha date);

        /**
         * @brief Devuelve el día
         * @return Día
         */
        int getDay();

        /**
         * @brief Devuelve el mes
         * @return Mes
         */
        int getMonth();

        /**
         * @brief Devuelve el año
         * @return Año
         */
        int getYear();
    };

    std::ostream &operator<<(std::ostream &co, Fecha date);
}

#endif

#ifndef LIB_EMPLEADO
#define LIB_EMPLEADO

#include <string>

#include "Person.h"

namespace oop
{
    class Empleado : public Person
    {
    private:
        Fecha hiring_date_;

    public:
        /* ----- Constructors / destructors ----- */

        /**
         * @brief Creates a new instance of Empleado
         */
        Empleado();

        /**
         * @brief Creates a new instance of Empleado
         * @param first_name First name
         * @param last_name Last name
         * @param dob Date of birth
         * @param address Address
         * @param dni National ID no.
         * @param hiring_date Date of hiring
         */
        Empleado(std::string &first_name, std::string &last_name, Fecha &dob,
                 std::string &address, std::string &dni, Fecha &hiring_date);

        /**
         * @brief Creates a new instance of Empleado
         * @param first_name First name
         * @param last_name Last name
         * @param day Day of birth
         * @param month Month of birth
         * @param year Year of birth
         * @param address Address
         * @param dni National ID no.
         * @param hday Day of hiring
         * @param hmonth Month of hiring
         * @param hyear Year of hiring
         */
        Empleado(std::string &first_name, std::string &last_name, int day,
                 int month, int year, std::string &address, std::string &dni,
                 int hday, int hmonth, int hyear);

        /* ----- Getters  ----- */

        /**
         * @brief Returns the hiring date
         * @return The hiring date
         */
        Fecha getHiringDate();

        /* ----- Setters ----- */

        /**
         * @brief Sets the hiring date
         * @param hiring_date The new hiring date
         */
        void setHiringDate(Fecha &hiring_date);

        /**
         * @brief Sets the hiring datee
         * @param day Day of hiring
         * @param month Month of hiring
         * @param year Year of hiring
         */
        void setHiringDate(int day, int month, int year);

        /* ----- Operators ----- */
        friend std::ostream &operator<<(std::ostream &co, Empleado &emp);
    };

    std::ostream &operator<<(std::ostream &co, Empleado &emp);
}

#endif

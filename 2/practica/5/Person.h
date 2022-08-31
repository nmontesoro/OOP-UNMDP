#ifndef LIB_PERSON
#define LIB_PERSON

#include <string>

#include "../3/Fecha.h"

namespace oop
{
    class Person
    {
    protected:
        std::string name_;
        Fecha dob_;
        std::string address_;
        std::string dni_;

    public:
        /* ----- Constructors / destructors ----- */

        /**
         * @brief Creates a new instance of Person
         */
        Person();

        /**
         * @brief Creates a new instance of Person
         * @param name Name
         * @param dob Date of birth
         * @param address Address
         * @param dni National ID no.
         */
        Person(std::string &name, Fecha &dob, std::string &address,
               std::string &dni);

        /**
         * @brief Creates a new instance of Person
         * @param name Name
         * @param day Day of birth
         * @param month Month of birth
         * @param year Year of birth
         * @param address Address
         * @param dni National ID no.
         */
        Person(std::string &name, int day, int month, int year,
               std::string &address, std::string &dni);

        /* ----- Getters ----- */

        /**
         * @brief Returns the name of the person
         * @return The name of the person
         */
        std::string getName();

        /**
         * @brief Returns the date of birth of the person
         * @return An object representing the person's date of birth
         */
        Fecha getDOB();

        /**
         * @brief Returns the address of the person
         * @return The address of the person
         */
        std::string getAddress();

        /**
         * @brief Returns the person's national ID number
         * @return The person's national ID no.
         */
        std::string getDNI();

        /* ----- Setters ----- */

        /**
         * @brief Sets the name of the person
         * @param name Name
         */
        void setName(std::string &name);

        /**
         * @brief Sets the person's date of birth
         * @param day The day of birth
         * @param month The month of birth
         * @param year The year of birth
         */
        void setDOB(int day, int month, int year);

        /**
         * @brief Sets the person's date of birth
         * @param dob An object representing the person's date of birth
         */
        void setDOB(Fecha &dob);

        /**
         * @brief Sets the person's address
         * @param address The address
         */
        void setAddress(std::string &address);

        /**
         * @brief Sets the person's national ID number
         * @param dni The national ID number
         */
        void setDNI(std::string &dni);

        /* ----- Other methods ----- */
    };
}

#endif

#ifndef LIB_PERSON
#define LIB_PERSON

#include <string>

#include "../3/Fecha.h"

namespace oop
{
    class Person
    {
    protected:
        std::string first_name_;
        std::string last_name_;
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
         * @param first_name First name
         * @param last_name Last name
         * @param dob Date of birth
         * @param address Address
         * @param dni National ID no.
         */
        Person(std::string &first_name, std::string &last_name, Fecha &dob,
               std::string &address, std::string &dni);

        /**
         * @brief Creates a new instance of Person
         * @param first_name First name
         * @param last_name Last name
         * @param day Day of birth
         * @param month Month of birth
         * @param year Year of birth
         * @param address Address
         * @param dni National ID no.
         */
        Person(std::string &first_name, std::string &last_name, int day,
               int month, int year, std::string &address, std::string &dni);

        /* ----- Getters ----- */

        /**
         * @brief Returns the first name of the person
         * @return The first name of the person
         */
        std::string getFirstName();

        /**
         * @brief Returns the last name of the person
         * @return The last name of the person
         */
        std::string getLastName();

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
         * @brief Sets the first name of the person
         * @param first_name First name
         */
        void setFirstName(std::string &first_name);

        /**
         * @brief Sets the last name of the person
         * @param last_name Last name
         */
        void setLastName(std::string &last_name);

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
        friend std::ostream &operator<<(std::ostream &co, Person &per);
    };

    std::ostream &operator<<(std::ostream &co, Person &per);
}

#endif

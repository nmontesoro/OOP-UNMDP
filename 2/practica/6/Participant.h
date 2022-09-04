#ifndef LIB_PARTICIPANTE
#define LIB_PARTICIPANTE

#include <string>

#include "../3/Fecha.h"
#include "../4/Tiempo.h"

namespace oop
{
    class Participant
    {
    private:
        std::string name_;
        Fecha dob_;
        Tiempo time_;
        int laps_;

    public:
        /**
         * @brief Crea una nueva instancia de Participant
         */
        Participant();

        /**
         * @brief Crea una nueva instancia de Participant
         * @param name Nombre del participante
         * @param dob Fecha de nacimiento
         * @param time Tiempo en la primera prueba
         * @param laps Cantidad de vueltas en la segunda prueba
         */
        Participant(std::string name, Fecha dob, Tiempo time, int laps);

        /**
         * @brief Crea una nueva instancia de Participant
         * @param name Nombre del participante
         * @param dob_day Dia de nacimiento
         * @param dob_month Mes de nacimiento
         * @param dob_year Ano de nacimiento
         * @param t_hours Horas de la primera prueba
         * @param t_minutes Minutos de la primera prueba
         * @param t_seconds Segundos de la primera prueba
         * @param laps Cantidad de vueltas de la segunda prueba
         */
        Participant(std::string name, int dob_day, int dob_month, int dob_year,
                    int t_hours, int t_minutes, int t_seconds, int laps);

        /**
         * @brief Devuelve el nombre del participante
         * @return Nombre del participante
         */
        std::string getName();

        /**
         * @brief Devuelve la fecha de nacimiento del participante
         * @return Fecha de nacimiento del participante
         */
        Fecha getDateOfBirth();

        /**
         * @brief Devuelve el tiempo de la primera prueba
         * @return Tiempo de la primera prueba
         */
        Tiempo getFirstTrialTime();

        /**
         * @brief Devuelve la cantidad de vueltas de la segunda prueba
         * @return Cantidad de vueltas de la segunda prueba
         */
        int getSecondTrialLaps();

        /**
         * @brief Establece el nombre del participante
         * @param name Nombre
         */
        void setName(std::string name);

        /**
         * @brief Establece la fecha de nacimiento del participante
         * @param dob Fecha de nacimiento
         */
        void setDateOfBirth(oop::Fecha dob);

        /**
         * @brief Establece la fecha de nacimiento del participante
         * @param day Dia de nacimiento
         * @param month Mes de nacimiento
         * @param year Ano de nacimiento
         */
        void setDateOfBirth(int day, int month, int year);

        /**
         * @brief Establece el tiempo del participante en la primera
         * prueba
         * @param time Tiempo
         */
        void setFirstTrialTime(oop::Tiempo time);

        /**
         * @brief Establece el tiempo del participante en la primera
         * prueba
         * @param hours Horas
         * @param minutes Minutos
         * @param seconds Segundos
         */
        void setFirstTrialTime(int hours, int minutes, int seconds);

        /**
         * @brief Establece la cantidad de vueltas del participante en
         * la segunda prueba
         * @param laps Cantidad de vueltas
         */
        void setSecondTrialLaps(int laps);

        /**
         * @brief Devuelve la edad del participante
         * @return La edad del participante
         */
        int getAge();
    };

    Participant *getParticipantFromStdin();
}

#endif

#include "Participant.h"

#include <iostream>

int getIntegerFromStdin();

oop::Participant::Participant()
{
    name_ = "";
    dob_ = Fecha();
    time_ = Tiempo();
    laps_ = 0;
}

oop::Participant::Participant(std::string name, Fecha dob, Tiempo time,
                              int laps)
{
    name_ = name;
    dob_ = dob;
    time_ = time;
    laps_ = laps;
}

oop::Participant::Participant(std::string name, int dob_day, int dob_month,
                              int dob_year, int t_hours, int t_minutes,
                              int t_seconds, int laps)
{
    Fecha dob = Fecha();
    Tiempo time = Tiempo();

    dob.setFecha(dob_day, dob_month, dob_year);
    time.setDatos(t_hours, t_minutes, t_seconds);

    *this = Participant(name, dob, time, laps);
}

std::string oop::Participant::getName() { return name_; }
oop::Fecha oop::Participant::getDateOfBirth() { return dob_; }
oop::Tiempo oop::Participant::getFirstTrialTime() { return time_; }
int oop::Participant::getSecondTrialLaps() { return laps_; }

void oop::Participant::setName(std::string name) { name_ = name; }
void oop::Participant::setDateOfBirth(oop::Fecha dob) { dob_ = dob; }

void oop::Participant::setDateOfBirth(int day, int month, int year)
{
    Fecha dob = Fecha();
    dob.setFecha(day, month, year);
    this->setDateOfBirth(dob);
}

void oop::Participant::setFirstTrialTime(oop::Tiempo time) { time_ = time; }
void oop::Participant::setFirstTrialTime(int hours, int minutes, int seconds)
{
    Tiempo time = Tiempo();
    time.setDatos(hours, minutes, seconds);
    this->setFirstTrialTime(time);
}

void oop::Participant::setSecondTrialLaps(int laps) { laps_ = laps; }

oop::Participant *oop::getParticipantFromStdin()
{
    std::string name;
    Fecha dob;
    Tiempo time;
    int laps = 0;

    std::cout << "Nombre:" << std::endl;
    std::getline(std::cin, name);

    std::cout << std::endl << "Fecha de nacimiento - ";
    dob.ingresarFecha();

    std::cout << std::endl << "Tiempo en primera prueba - ";
    time.ingresarDatos();

    std::cout << std::endl << "Numero de vueltas en segunda prueba: ";
    laps = getIntegerFromStdin();

    return new Participant(name, dob, time, laps);
}

int getIntegerFromStdin()
{
    bool success = false;
    std::string user_input;
    int laps = 0;

    while (!success)
    {
        std::getline(std::cin, user_input);

        try
        {
            laps = std::stoi(user_input);
            success = true;
        }
        catch (const std::exception)
        {
            std::cout << "Intente nuevamente..." << std::endl;
        }
    }

    return laps;
}

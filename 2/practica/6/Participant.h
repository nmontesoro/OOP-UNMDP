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
        Participant();
        Participant(std::string name, Fecha dob, Tiempo time, int laps);
        Participant(std::string name, int dob_day, int dob_month, int dob_year,
                    int t_hours, int t_minutes, int t_seconds, int laps);

        std::string getName();
        Fecha getDateOfBirth();
        Tiempo getFirstTrialTime();
        int getSecondTrialLaps();

        void setName(std::string name);
        void setDateOfBirth(oop::Fecha dob);
        void setDateOfBirth(int day, int month, int year);
        void setFirstTrialTime(oop::Tiempo time);
        void setFirstTrialTime(int hours, int minutes, int seconds);
        void setSecondTrialLaps(int laps);
    };

    Participant *getParticipantFromStdin();
}

#endif

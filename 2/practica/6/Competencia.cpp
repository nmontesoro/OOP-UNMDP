#include "Competencia.h"

#include <iomanip>
#include <iostream>

int main()
{
    bool cont = true;
    std::string last_command = "";
    std::vector<oop::Participant> participants;

    while (cont)
    {
        ShowCmdPrompt();
        GetCommand(last_command);

        if (last_command == "np")
        {
            AddParticipantFromStdin(participants);
        }
        else if (last_command == "h")
        {
            ShowHelpMsg();
        }
        else if (last_command == "list")
        {
            ShowCompetitionResults(participants);
        }
        else if (last_command == "q")
        {
            cont = false;
        }
        else
        {
            ShowInvalidCommandMsg(last_command);
        }
    }

    return 0;
}

void ShowCmdPrompt() { std::cout << "(competencia) >> "; }

void ShowHelpMsg()
{
    std::cout << "Competencia de ciclismo\n"
                 "-----------------------\n\n"
                 "    np - Nuevo participante\n"
                 "  list - Muestra los datos\n"
                 "     h - Ayuda\n"
                 "     q - Salir\n";
}

void GetCommand(std::string &cmd) { std::getline(std::cin, cmd); }

void AddParticipantFromStdin(std::vector<oop::Participant> &participants)
{
    oop::Participant *p = oop::getParticipantFromStdin();
    participants.insert(participants.begin(), *p);
}

void ShowInvalidCommandMsg(std::string &cmd)
{
    std::cout << "El comando \"" << cmd << "\" no es valido." << std::endl
              << "Use 'h' para ver una lista de comandos disponibles."
              << std::endl;
}

void PrintCompetitionInfo(oop::Participant &fastest_participant,
                          oop::Participant &participant_with_most_laps)
{
    std::cout << "Participante mas rapido: " << fastest_participant.getName()
              << std::endl
              << "Participante con mas vueltas: "
              << participant_with_most_laps.getName() << std::endl
              << std::endl;
}

void PrintListHeader()
{
    std::cout << PRTHLP("Nombre") << PRTHLP("Edad") << PRTHLP("Tiempo")
              << PRTHLP("Vueltas") << PRTHLP("Delta t") << PRTHLP("Delta v")
              << std::endl
              << std::string(80, '-') << std::endl;
}

void PrintFastestParticipant(oop::Participant &fastest_participant)
{
    std::cout << PRTHLP(fastest_participant.getName())
              << PRTHLP(fastest_participant.getAge())
              << PRTHLP(fastest_participant.getFirstTrialTime())
              << PRTHLP(fastest_participant.getSecondTrialLaps())
              << PRTHLP("----") << PRTHLP("----") << std::endl;
}

void PrintOtherParticipants(std::vector<oop::Participant> &participants)
{
    oop::Tiempo time_delta;
    int lap_delta = 0;

    for (size_t i = 1; i < participants.size(); i++)
    {
        time_delta = participants[i].getFirstTrialTime() -
                     participants[0].getFirstTrialTime();
        lap_delta = participants[i].getSecondTrialLaps() -
                    participants[0].getSecondTrialLaps();
        std::cout << PRTHLP(participants[i].getName())
                  << PRTHLP(participants[i].getAge())
                  << PRTHLP(participants[i].getFirstTrialTime())
                  << PRTHLP(participants[i].getSecondTrialLaps())
                  << PRTHLP(time_delta) << PRTHLP(lap_delta) << std::endl;
    }
}

void ShowCompetitionResults(std::vector<oop::Participant> participants)
{
    if (participants.size() <= 0)
    {
        std::cout << "No hay suficientes participantes" << std::endl;
    }
    else
    {
        SortParticipantsByLapCount(participants);
        oop::Participant ParticipantWithMostLaps = participants[0];
        SortParticipantsByLapTime(participants);

        PrintCompetitionInfo(participants[0], ParticipantWithMostLaps);
        PrintListHeader();
        PrintFastestParticipant(participants[0]);
        PrintOtherParticipants(participants);
    }
}

bool CompareParticipantTimes(oop::Participant &a, oop::Participant &b)
{
    return (a.getFirstTrialTime() < b.getFirstTrialTime());
}

bool CompareParticipantLapCounts(oop::Participant &a, oop::Participant &b)
{
    return (a.getSecondTrialLaps() > b.getSecondTrialLaps());
}

void SortParticipantsByLapCount(std::vector<oop::Participant> &participants)
{
    std::sort(participants.begin(), participants.end(),
              CompareParticipantLapCounts);
}

void SortParticipantsByLapTime(std::vector<oop::Participant> &participants)
{
    std::sort(participants.begin(), participants.end(),
              CompareParticipantTimes);
}

#define COLWIDTH 13
#define PRTHLP(x) std::setw(COLWIDTH) << x

#include <string>

#include "Participant.h"

/**
 * @brief Muestra la línea de comandos
 */
void ShowCmdPrompt(void);

/**
 * @brief Muestra el mensaje de ayuda
 */
void ShowHelpMsg(void);

/**
 * @brief Vuelca el comando ingresado por el usuario a la variable cmd
 * @param cmd String donde quedará el comando
 */
void GetCommand(std::string &cmd);

/**
 * @brief Agrega un participante nuevo al vector de participantes, desde
 * stdin.
 * @param participants El vector de participantes
 */
void AddParticipantFromStdin(std::vector<oop::Participant> &participants);

/**
 * @brief Muestra el mensaje de comando inválido
 * @param cmd El comando ingresado por el usuario
 */
void ShowInvalidCommandMsg(std::string &cmd);

/**
 * @brief Muestra los resultados de la competencia
 * @param participants El vector de participantes
 */
void ShowCompetitionResults(std::vector<oop::Participant> participants);

/**
 * @brief Helper para sort
 *
 * Usada para ordenar el vector de participantes según tiempos de prueba
 * ascendentes.
 * @param a Participante a
 * @param b Participante b
 * @return Devuelve true si el tiempo del participante a es menor que el
 * del participante b
 */
bool CompareParticipantTimes(oop::Participant &a, oop::Participant &b);

/**
 * @brief Helper para sort
 *
 * Usada para ordenar el vector de participantes según cantidad de
 * vueltas en forma descendente
 * @param a Participante a
 * @param b Participante b
 * @return Devuelve true si el participante a hizo mas vueltas que el
 * participante b
 */
bool CompareParticipantLapCounts(oop::Participant &a, oop::Participant &b);

/**
 * @brief Ordena el vector de participantes según cantidad de vueltas
 * (descendente)
 * @param participants Vector de participantes
 */
void SortParticipantsByLapCount(std::vector<oop::Participant> &participants);

/**
 * @brief Ordena el vector de participantes según tiempo de vuelta
 * (ascendente)
 * @param participants Vector de participantes
 */
void SortParticipantsByLapTime(std::vector<oop::Participant> &participants);

/**
 * @brief Helper para ShowCompetitionResults. Muestra los nombres de las
 * columnas en pantalla.
 */
void PrintListHeader();

/**
 * @brief Helper para ShowCompetitionResults. Muestra los datos del
 * participante más rápido.
 * @param fp Participante más rápido
 */
void PrintFastestParticipant(oop::Participant &fp);

/**
 * @brief Helper para ShowCompetitionResults. Muestra los demás
 * participantes.
 * @param participants Vector de participantes.
 */
void PrintOtherParticipants(std::vector<oop::Participant> &participants);

/**
 * @brief Helper para ShowCompetitionResults. Muestra quién tuvo el
 * tiempo más rápido, y quién la mayor cantidad de vueltas.
 * @param fastest_participant Participante más rápido
 * @param participant_with_most_laps Participante con mayor cantidad de
 * vueltas.
 */
void PrintCompetitionInfo(oop::Participant &fastest_participant,
                          oop::Participant &participant_with_most_laps);

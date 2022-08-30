#include "Tiempo.h"

#include <iomanip>
#include <iostream>

using namespace oop;
using namespace std;

const regex Tiempo::tiempo_regex_ =
    regex("^(\\d*?):([0-5]?[0-9]):([0-5]?[0-9])\\.?\\d*$");

Tiempo::Tiempo()
{
    hora_ = 0;
    minutos_ = 0;
    segundos_ = 0;
}

void Tiempo::setHora(int hora) { hora_ = hora; }
void Tiempo::setMinutos(int minutos) { minutos_ = minutos; }
void Tiempo::setSegundos(int segundos) { segundos_ = segundos; }

void Tiempo::setDatos(int hora, int minutos, int segundos)
{
    hora_ = hora;
    minutos_ = minutos;
    segundos_ = segundos;
}

int Tiempo::getHora() { return hora_; }
int Tiempo::getMinutos() { return minutos_; }
int Tiempo::getSegundos() { return segundos_; }

void Tiempo::ingresarDatos()
{
    bool time_is_valid = false;
    string user_input = "";
    int h = 0, m = 0, s = 0;

    while (!time_is_valid)
    {
        cout << "Ingrese un tiempo (hh:mm:ss): " << endl;
        getline(cin, user_input);

        if (matchTiempoRegex(user_input, h, m, s) && validarTiempo(h, m, s))
        {
            this->hora_ = h;
            this->minutos_ = m;
            this->segundos_ = s;
            time_is_valid = true;
        }
        else
        {
            cout << "Fecha invalida! Intente nuevamente..." << endl;
        }
    }
}

bool Tiempo::matchTiempoRegex(string input, int &h, int &m, int &s)
{
    smatch matches;
    bool has_matched = regex_match(input, matches, tiempo_regex_);

    if (has_matched)
    {
        h = stoi(matches[1]);
        m = stoi(matches[2]);
        s = stoi(matches[3]);
    }

    return has_matched;
}

bool Tiempo::validarTiempo(int h, int m, int s)
{
    return (h >= 0 && m >= 0 && m < 60 && s >= 0 && s < 60);
}

void Tiempo::muestra_fmt_estandard()
{
    cout << setfill('0') << setw(2) << hora_ << ":" << setw(2) << minutos_
         << ":" << setw(2) << segundos_ << endl;
}

/* TODO: Cuál es la diferencia? */
void Tiempo::muestra_fmt_universal() { muestra_fmt_estandard(); }

/* Para usar strncpy en vez de strncpy_s */
#define _CRT_SECURE_NO_WARNINGS

#include "Fecha.h"

#include <string.h>

#include <iostream>
#include <regex>
#include <string>

using namespace std;
using namespace oop;

const regex Fecha::fecha_regex = regex("(\\d{4})[/-](\\d{1,2})[/-](\\d{1,2})");

const char *Fecha::months[] = {
    "(undefined)", "enero",     "febrero",  "marzo",  "abril",
    "mayo",        "junio",     "julio",    "agosto", "septiembre",
    "octubre",     "noviembre", "diciembre"};

Fecha::Fecha()
{
    day = 0;
    month = 0;
    year = 0;
}

void Fecha::setFecha(int day, int month, int year)
{
    if (validarFecha(day, month, year))
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
}

void Fecha::setDay(int day)
{
    if (validarFecha(day, this->month, this->year))
    {
        this->day = day;
    }
}

void Fecha::setMonth(int month)
{
    if (validarFecha(this->day, month, this->year))
    {
        this->month = month;
    }
}

void Fecha::setYear(int year)
{
    if (validarFecha(this->day, this->month, year))
    {
        this->year = year;
    }
}

void Fecha::ingresarFecha()
{
    bool fecha_is_valid = false;
    string user_input = "";
    int d = 0, m = 0, y = 0;

    while (!fecha_is_valid)
    {
        cout << "Ingrese una fecha (YYYY-MM-DD): " << endl;
        getline(cin, user_input);

        if (matchFechaRegex(user_input, d, m, y) && validarFecha(d, m, y))
        {
            this->day = d;
            this->month = m;
            this->year = y;
            fecha_is_valid = true;
        }
        else
        {
            cout << "Fecha invalida! Intente nuevamente..." << endl;
        }
    }
}

bool Fecha::matchFechaRegex(string input, int &day, int &month, int &year)
{
    smatch matches;
    bool has_matched = regex_match(input, matches, fecha_regex);

    if (has_matched)
    {
        day = stoi(matches[3]);
        month = stoi(matches[2]);
        year = stoi(matches[1]);
    }

    return has_matched;
}

bool Fecha::validarFecha(int day, int month, int year)
{
    bool valid = (day > 0 && month > 0 && month <= 12 && year > 0);

    if (valid)
    {
        if (month == 2)
        {
            /* No soporta años bisiestos */
            valid = (day <= 28);
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            valid = (day <= 30);
        }
        else
        {
            valid = (day <= 31);
        }
    }

    return valid;
}

void Fecha::imprimir_la()
{
    cout << day << "/" << month << "/" << year << endl;
}

void Fecha::imprimir_us()
{
    cout << month << "/" << year << "/" << year << endl;
}

void Fecha::imprimir_letras()
{
    char *mes = mesLetras();

    if (mes)
    {
        cout << day << " de " << mesLetras() << " de " << year << endl;
        free(mes);
    }
}

char *Fecha::mesLetras()
{
    /* Esto es horrible, hay que reescribirlo como C++, pero me piden
    que devuelva char * en vez de string */

    char *m = (char *)calloc(12, sizeof(char));

    if (m)
    {
        if (month < 1 || month > 12)
        {
            month = 0;
        }

        strncpy(m, months[month], 12);
    }
    return m;
}
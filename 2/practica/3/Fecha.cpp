/* Para usar strncpy en vez de strncpy_s */
#define _CRT_SECURE_NO_WARNINGS

#include "Fecha.h"

#include <string.h>

#include <iostream>
#include <regex>
#include <string>

using namespace std;
using namespace oop;

const regex Fecha::fecha_regex_ = regex("(\\d{4})[/-](\\d{1,2})[/-](\\d{1,2})");

const char *Fecha::months_[] = {
    "(undefined)", "enero",     "febrero",  "marzo",  "abril",
    "mayo",        "junio",     "julio",    "agosto", "septiembre",
    "octubre",     "noviembre", "diciembre"};

Fecha::Fecha()
{
    day_ = 0;
    month_ = 0;
    year_ = 0;
}

void Fecha::setFecha(int day, int month, int year)
{
    if (validarFecha(day, month, year))
    {
        this->day_ = day;
        this->month_ = month;
        this->year_ = year;
    }
}

void Fecha::setDay(int day)
{
    if (validarFecha(day, this->month_, this->year_))
    {
        this->day_ = day;
    }
}

void Fecha::setMonth(int month)
{
    if (validarFecha(this->day_, month, this->year_))
    {
        this->month_ = month;
    }
}

void Fecha::setYear(int year)
{
    if (validarFecha(this->day_, this->month_, year))
    {
        this->year_ = year;
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
            this->day_ = d;
            this->month_ = m;
            this->year_ = y;
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
    bool has_matched = regex_match(input, matches, fecha_regex_);

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
    cout << day_ << "/" << month_ << "/" << year_ << endl;
}

void Fecha::imprimir_us()
{
    cout << month_ << "/" << year_ << "/" << year_ << endl;
}

void Fecha::imprimir_letras()
{
    char *mes = mesLetras();

    if (mes)
    {
        cout << day_ << " de " << mesLetras() << " de " << year_ << endl;
        free(mes);
    }
}

char *Fecha::mesLetras()
{
    /* Esto es horrible, hay que reescribirlo como C++, pero me piden
    que devuelva char * en vez de string */

    char *m = static_cast<char *>(calloc(12, sizeof(char)));

    if (m)
    {
        if (month_ < 1 || month_ > 12)
        {
            month_ = 0;
        }

        strncpy(m, months_[month_], 12);
    }
    return m;
}

ostream &oop::operator<<(ostream &co, Fecha date)
{
    return co << date.day_ << " de " << date.mesLetras() << " de "
              << date.year_;
}

int Fecha::getDay() { return day_; }
int Fecha::getMonth() { return month_; }
int Fecha::getYear() { return year_; }

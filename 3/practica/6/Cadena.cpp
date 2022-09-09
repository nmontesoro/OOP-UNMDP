#define MAX_BUF_SIZE 4096

#include "Cadena.h"

#include <string.h>

#include <cmath>

CCadena::CCadena(const char *str)
{
    if (str)
    {
        nlong = strlen(str);
        pmCad = new char[nlong + 1];
        strncpy(pmCad, str, nlong);
    }
    else
    {
        nlong = 0;
        pmCad = nullptr;
    }
}

CCadena::CCadena(const CCadena &cad) { *this = CCadena(cad.pmCad); }

CCadena::CCadena(char, int)
{
    /* ¿Qué se supone que hace este constructor? */
    nlong = 0;
    pmCad = nullptr;
}

CCadena::~CCadena()
{
    delete[] pmCad;
    nlong = 0;
}

CCadena operator+(const CCadena &a, const CCadena &b)
{
    CCadena cad;
    size_t length;
    char *str;

    if (!a.pmCad || !b.pmCad)
    {
        /* Alguno de los punteros es nulo, devuelvo una cadena vacía */
        cad = CCadena();
    }
    else
    {
        /* Asigno memoria a un array temporal */
        length = a.nlong + b.nlong;
        str = new char[length + 1];
        /* Copio los contenidos de a y b */
        strncpy(str, a.pmCad, a.nlong);
        strncpy(str + a.nlong, b.pmCad, b.nlong);
        /* Creo el objeto CCadena */
        cad = CCadena(str);
        /* Libero memoria del array */
        delete[] str;
    }

    return cad;
}

bool operator==(const CCadena &a, const CCadena &b)
{
    bool result = (a.nlong == b.nlong && a.pmCad && b.pmCad);
    size_t i = 0;

    while (result && i < a.nlong)
    {
        result = (a.pmCad[i] == b.pmCad[i]);
        i++;
    }

    return result;
}

bool operator!=(const CCadena &a, const CCadena &b) { return !(a == b); }

bool operator<(const CCadena &a, const CCadena &b)
{
    bool result = (a.pmCad && b.pmCad && a.nlong > 0 && b.nlong > 0);
    size_t i = 0, n = min<size_t>(a.nlong, b.nlong);

    while (result && i < n)
    {
        result = (a.pmCad[i] < b.pmCad[i]);
        i++;
    }

    return result;
}

bool operator>(const CCadena &a, const CCadena &b)
{
    bool result = (a.pmCad && b.pmCad && a.nlong > 0 && b.nlong > 0);
    size_t i = 0, n = min<size_t>(a.nlong, b.nlong);

    while (result && i < n)
    {
        result = (a.pmCad[i] > b.pmCad[i]);
        i++;
    }

    return result;
}

istream &operator>>(istream &s, CCadena &c)
{
    /* Asigno memoria */
    char *str = new char[MAX_BUF_SIZE];

    /* Leo como máximo MAX_BUF_SIZE - 1 caracteres desde el stream */
    s.read(str, MAX_BUF_SIZE - 1);

    /* Libero la memoria asignada al array previo */
    delete[] c.pmCad;

    /* Seteo los parámetros */
    c.pmCad = str;
    c.nlong = strlen(str);

    return s;
}

ostream &operator<<(ostream &s, const CCadena &c) { return (s << c.pmCad); }

CCadena &CCadena::operator=(const CCadena &rhs)
{
    return *new CCadena(rhs.pmCad);
}

CCadena &CCadena::operator=(const char *rhs) { return *new CCadena(rhs); }

CCadena CCadena::operator+=(const CCadena &rhs)
{
    CCadena result;
    size_t n = 0;

    if (rhs.nlong > 0 && rhs.pmCad)
    {
        n = this->nlong + rhs.nlong + 2;
        char *str = new char[n];
        strncpy(str, this->pmCad, this->nlong);
        strncpy(str + this->nlong, rhs.pmCad, rhs.nlong);
        result = CCadena(str);
    }
    else
    {
        result = *this;
    }

    return result;
}

char &CCadena::operator[](unsigned int i) { return this->pmCad[i]; }

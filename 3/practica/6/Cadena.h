#ifndef LIB_CADENA
#define LIB_CADENA

#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Clase para operar con cadenas de caracteres
class CCadena
{
private:
    char *pmCad;   // Puntero a la cadena de caracteres
    size_t nlong;  // Longitud de la cadena

public:
    CCadena(const char * = 0);  // Constructor
    CCadena(const CCadena &);   // Constructor copia
    CCadena(char, int);         // Constructor
    ~CCadena();                 // Destructor

    // Concatenar cadenas de caracteres
    friend CCadena operator+(const CCadena &, const CCadena &);

    // Comparación de cadenas
    friend bool operator==(const CCadena &, const CCadena &);
    friend bool operator!=(const CCadena &, const CCadena &);
    friend bool operator<(const CCadena &, const CCadena &);
    friend bool operator>(const CCadena &, const CCadena &);

    // Operaciones de entrada/salida
    friend istream &operator>>(istream &, CCadena &);
    friend ostream &operator<<(ostream &, const CCadena &);

    // Asignación, concatenación e indexación
    CCadena &operator=(const CCadena &);  // Asignación objeto
    CCadena &operator=(const char *);     // Asignación cadena
    CCadena operator+=(const CCadena &);  // Suma más asignación
    char &operator[](unsigned int);       // Indexación
    size_t ObtenerLong() const { return nlong; }
}

#endif

/*
6. Implementar el mismo TDA del ejercicio 5, pero ahora usando una _class_ y una
   _struct_ de C++. ¿Qué diferencias y qué similitudes nota entre una _class_ y
   una _struct_ de C++? ¿Y entre una _struct_ de C y una de C++?
   Experimente sobre los modificadores de acceso sobre métodos y atributos: ¿Le
   resultó más fácil implementar el TDA en C++? ¿Por qué?
*/

#include <string>

using namespace std;

class Vehiculo
{
private:
    string ma;
    int pu;
    int km;
    int cc;

public:
    /* Constructor */
    Vehiculo();
    Vehiculo(string m, int p, int k, int c);

    /* Getters */
    string marca();
    int puertas();
    int kilometraje();
    int cilindrada();

    /* Setters */
    void marca(string m);
    void puertas(int n);
    void kilometraje(int k);
    void cilindrada(int c);
};

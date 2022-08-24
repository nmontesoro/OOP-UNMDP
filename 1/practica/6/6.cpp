#include "6.h"

using namespace std;

Vehiculo::Vehiculo()
{
    ma = "";
    pu = 0;
    km = 0;
    cc = 0;
}

Vehiculo::Vehiculo(string m, int p, int k, int c)
{
    ma = m;
    pu = p;
    km = k;
    cc = c;
}

string Vehiculo::marca() { return ma; }
void Vehiculo::marca(string m) { ma = m; }

int Vehiculo::puertas() { return pu; }
void Vehiculo::puertas(int p) { pu = p; }

int Vehiculo::kilometraje() { return km; }
void Vehiculo::kilometraje(int k) { km = k; }

int Vehiculo::cilindrada() { return cc; }
void Vehiculo::cilindrada(int c) { cc = c; }

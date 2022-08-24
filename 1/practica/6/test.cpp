#include "6.h"

using namespace std;

int main(int argc, char **argv)
{
    string test = "";
    Vehiculo v = Vehiculo("Peugeot", 3, 148000, 1390);

    v.marca("Alfa Romeo");
    v.puertas(5);
    v.kilometraje(20500);
    v.cilindrada(1980);

    test = v.marca();

    return 0;
}

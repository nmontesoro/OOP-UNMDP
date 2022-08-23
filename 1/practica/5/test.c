#include "5.h"

int main(int argc, char **argv)
{
    vehiculo *v = crearVehiculo();

    if (v)
    {
        v->set_marca(v, "Peugeot");
        v->acelerar(v);
    }

    destruirVehiculo(&v);

    return 0;
}

#include "5.h"

int main(int argc, char **argv)
{
    vehiculo *v = crearVehiculo();

    if (v)
    {
        v->set_marca(v, "Peugeot");
        v->set_kilometraje(v, 148000);

        v->acelerar(v);
        v->get_estado(v);
    }

    destruirVehiculo(&v);

    return 0;
}

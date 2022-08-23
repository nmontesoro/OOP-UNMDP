#include "5.h"

#include <stdio.h>
#include <stdlib.h>

void acelerar(vehiculo *self)
{
    printf("Vehiculo %s acelerando\n", self->marca);
}

void set_marca(vehiculo *v, char *marca)
{
    if (v && marca)
    {
        v->marca = marca;
    }
}

vehiculo *crearVehiculo()
{
    vehiculo *v = (vehiculo *)calloc(1, sizeof(vehiculo));

    if (v)
    {
        v->acelerar = acelerar;
        v->set_marca = set_marca;
    }

    return v;
}

void destruirVehiculo(vehiculo **v)
{
    // Asume que la memoria asignada a la marca es liberada por el usuario
    if (v && *v)
    {
        free(*v);
        v = NULL;
    }
}

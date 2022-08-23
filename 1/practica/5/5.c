#include "5.h"

#include <stdio.h>
#include <stdlib.h>

void set_status(vehiculo *self, enum vehiculo_estados s)
{
    if (self)
    {
        self->estado = s;
    }
}

void acelerar(vehiculo *self) { set_status(self, acelerando); }

void frenar(vehiculo *self) { set_status(self, frenado); }

void prender(vehiculo *self) { set_status(self, encendido); }

void apagar(vehiculo *self) { set_status(self, apagado); }

void set_marca(vehiculo *v, char *marca)
{
    if (v && marca)
    {
        v->marca = marca;
    }
}

void set_puertas(vehiculo *v, int puertas)
{
    if (v)
    {
        v->puertas = puertas;
    }
}

void set_kilometraje(vehiculo *v, int km)
{
    if (v)
    {
        v->km = km;
    }
}

void set_cilindrada(vehiculo *v, int cc)
{
    if (v)
    {
        v->cilindrada = cc;
    }
}

char *get_marca(vehiculo *v)
{
    char *marca = NULL;

    if (v)
    {
        marca = v->marca;
    }
    return marca;
}

int get_puertas(vehiculo *v) { return v ? v->puertas : 0; }

int get_kilometraje(vehiculo *v) { return v ? v->km : 0; }

int get_cilindrada(vehiculo *v) { return v ? v->cilindrada : 0; }

enum vehiculo_estados get_estado(vehiculo *v) { return v ? v->estado : -1; }

vehiculo *crearVehiculo()
{
    vehiculo *v = (vehiculo *)calloc(1, sizeof(vehiculo));

    if (v)
    {
        v->acelerar = acelerar;
        v->frenar = frenar;
        v->prender = prender;
        v->apagar = apagar;

        v->set_marca = set_marca;
        v->set_puertas = set_puertas;
        v->set_kilometraje = set_kilometraje;
        v->set_cilindrada = set_cilindrada;

        v->get_marca = get_marca;
        v->get_puertas = get_puertas;
        v->get_kilometraje = get_kilometraje;
        v->get_cilindrada = get_cilindrada;
        v->get_estado = get_estado;
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

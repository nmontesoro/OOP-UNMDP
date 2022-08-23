/*
5. Implementar un TDA llamado `vehiculo`, organizando la definición en un
   archivo de cabecera y su implementación en un `.c`. Utilice una estructura
   que contenga campos para representar los atributos del vehículo: marca,
   puertas, kilometraje y cilindrada, y punteros a funciones _getters_ y
   _setters_ para acceder a los atributos antes mencionados, y algunas acciones
   que puede realizar el vehículo: acelerar, frenar, prender, apagar.
   Además, son necesarias dos funciones encargadas de reservar y liberar memoria
   de forma dinámica: `crearVehiculo` y `destruirVehiculo`.
*/

typedef struct vehiculo
{
    char *marca;
    int puertas;
    int km;
    int cilindrada;

    void (*acelerar)(struct vehiculo *self);
    void (*set_marca)(struct vehiculo *self, char *marca);
} vehiculo;

vehiculo *crearVehiculo();

void destruirVehiculo(vehiculo **v);

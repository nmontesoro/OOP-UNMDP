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

enum vehiculo_estados
{
    idle,
    acelerando,
    frenado,
    encendido,
    apagado
};

typedef struct vehiculo
{
    char *marca;
    int puertas;
    int km;
    int cilindrada;
    enum vehiculo_estados estado;

    void (*acelerar)(struct vehiculo *self);
    void (*frenar)(struct vehiculo *self);
    void (*prender)(struct vehiculo *self);
    void (*apagar)(struct vehiculo *self);

    void (*set_marca)(struct vehiculo *self, char *marca);
    void (*set_puertas)(struct vehiculo *self, int puertas);
    void (*set_kilometraje)(struct vehiculo *self, int km);
    void (*set_cilindrada)(struct vehiculo *self, int cc);

    char *(*get_marca)(struct vehiculo *self);
    int (*get_puertas)(struct vehiculo *self);
    int (*get_kilometraje)(struct vehiculo *self);
    int (*get_cilindrada)(struct vehiculo *self);
    enum vehiculo_estados (*get_estado)(struct vehiculo *self);
} vehiculo;

vehiculo *crearVehiculo();

void destruirVehiculo(vehiculo **v);

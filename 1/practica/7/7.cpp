/*
7. Agregue un atributo público estático llamado `valor_patente` de tipo `float`
   a la clase `vehiculo` del ejercicio 6. Luego, desde el programa principal,
   cree dos representantes o _instancias_ de tipo `vehiculo` y en una de las
   instancias cambie el valor de dicho atributo. Entonces, si usando un
   `printf` muestra el valor del mismo atributo, pero de la otra instancia, ¿qué
   valor se muestra en consola? ¿Por qué? ¿Será posible acceder al atributo en
   cuestión **sin** crear ninguna instancia de `vehiculo`? Experimente y
   comente.
*/

#include <stdio.h>

#include "../6/6.h"

int main(int argc, char **argv)
{
    /* Se inicializan con todo en cero */
    Vehiculo v1, v2;

    v2.valor_patente = 4;

    printf("Patente vehiculo 1: %5.4f\n", v1.valor_patente);
    printf("Patente vehiculo 2: %5.4f\n", v2.valor_patente);

    return 0;
}

# Primer parcial 2021

## Ejercicio 1

Se cuenta con dos archivos: `main.cpp` y `polinomio.cpp` que son la 
implementación parcial de un programa que permite trabajar con ecuaciones
algebraicas o polinomios.

Se pide escribir los archivos de cabecera e implementación necesarios en 
lenguaje C++ para que el código del archivo `main.cpp` compile sin errores ni
advertencias. El ingreso de información para testear la implementación debe ser
el siguiente:

> 2x^3-x+8.25 más 5x^5-2x^3+7x^2-3 es igual a 5x^5+7x^2-x+5.25

Además, cada término del polinomio debe ser representado por una clase 
`CTermino` y cada polinomio por una clase `CPolinomio`. La clase `CTermino` debe
tener dos atributos privados: `coeficiente` y `exponente`, y los métodos 
necesarios para permitir al menos:

- Construir un término iniciado a 0 por omisión
- Acceder al coeficiente de un término
- Acceder al exponente de un término
- Obtener la cadena de caracteres equivalente a un término con el formato
siguiente: `{+|-}7x^4`

La clase `CPolinomio` debe tener un atributo privado (`polinomio`), el cual debe
almacenar los términos del polinomio, así como los métodos necesarios para 
permitir al menos:

- Construir un polinomio, inicialmente con cero términos
- Obtener el número de términos que tiene actualmente cada polinomio
- Asignar un término a un polinomio colocándolo en orden ascendente del 
exponente. Si el término existe, se sumarán los coeficientes. Si el coeficiente
es nulo, no se realizará ninguna operación. Cada vez que se inserte un nuevo 
término, se incrementará automáticamente el tamaño del polinomio en 1. El método
encargado de esta operación tendrá un parámetro de la clase `CTermino`.
- Sumar dos polinomios. El polinomio resultante quedará también ordenado en
orden ascendente del exponente.
- Obtener la cadena de caracteres correspondiente a la representación de un
polinomio con el formato siguiente: `+5x^5-1x^1+5.25`.

## Ejercicio 2

Escriba un programa en lenguaje C++ que permita ejecutar el conjunto de 
sentencias o tareas mostradas en el siguiente código (almacenado en `main.cpp`):

```
#include "cRadioReloj.h"
int main() {
  cReloj clock1, // por defecto: 0 0 0
      clock2(3, 4, 50), clock3(clock2);
  clock1.setTiempo(23, 58, 59);
  clock1.setMarca("primero");
  clock2.setMarca("segundo");
  clock3.setMarca("reloj copiado");
  cRadio radio1, // por defecto: 95.5 FM false
      radio2(103.3), radio3(860.0, AM), radio4(radio3);
  radio4.setPrendido(true);
  cRadioReloj alarma1(cTime(23, 59, 59)),
      // reloj=(23,59,59) alarma=(0,0,0) Timbre
      // alarma_off 100.1 FM radio_off
      alarma2(clock1.getTiempo(), cTime(8, 29, 58));
  alarma1.setPrendido(true);
  alarma1.setAlarma(12, 59, 59);
  alarma2.setBanda(AM);
  // TODO : encender la radio de alarma2
  alarma1.incrementarTiempo();
  cTime tiempo = alarma1.getTiempo();
  cout << "Hora mostrada en la radio_alarma1: " << tiempo
       <<’\n ";
          alarma2.incrementarTiempo();
  tiempo = alarma2.getTiempo();
  cout << "Hora mostrada en la radio_alarma2: " << tiempo
       <<’\n ";
          alarma2.incrementarTiempo();
  tiempo = alarma2.getTiempo();
  cout << "Hora mostrada en la radio_alarma2: " << tiempo <<’\n ";
      if (alarma1.verificarAlarma()) cout
       << "La alarma 1 esta prendida" << endl;
  else cout << "La alarma 1 esta apagada " << endl;
  return 0;
}
```

Las clases `cReloj`, `cRadio`, `cRadioReloj` y `cTime` tienen los siguientes
atributos privados/protected:

```
class cReloj {
  private / protected : cTime time;
  char *marca;

 public:
  // todos los métodos necesarios
};

enum TipoDeBanda { AM, FM };
class cRadio {
  private / protected : float frecuencia;
  TipoDeBanda banda;
  bool prendido;

 public:
  // todos los métodos necesarios
};
enum TipoAlarma { Musica, Timbre };
class cRadioReloj : public cRadio, public cReloj {
  Private / protected : cTime alarma;
  TipoAlarma tipo;
  bool prendido;

 public:
  // todos los métodos necesarios
};
class cTime {
  private / protected : unsigned int hora;
  unsigned int minuto;
  unsigned int segundo;

 public:
  // todos los métodos necesarios
};

```

Se debe realizar una correcta modularización del código, y el programa debe
construirse (`build`) sin errores (`errors`) ni advertencias (`warnings`).

Recuerde gestionar adecuadamente el uso de la memoria dinámica utilizando las
funciones proporcionadas por el lenguaje a tal efecto.

_Hint:_ para considerar los métodos que deben implementar las distintas clases
considere las sentencias usadas en el `main`.

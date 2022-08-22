# Preguntas orientadoras

1. ¿Qué entiende por paradigma? ¿Qué paradigma de programación utilizó hasta
   ahora? ¿Cuáles son sus características?

   **Definiciones**

   Un paradigma es un estilo de programación. Un conjunto de métodos
   sistemáticos para resolver problemas computacionales.
   [(Profile)](https://profile.es/blog/que-son-los-paradigmas-de-programacion/)

   Los paradigmas de programación son las formas de clasificar los lenguajes de
   programación en función de sus características.
   [(Wikipedia)](https://es.wikipedia.org/wiki/Paradigma_de_programaci%C3%B3n)

   Son distintas maneras y estilos para plantear una solución a un problema
   computacional. (Cátedra)

   **Utilizados hasta ahora**

   Hasta ahora hemos utilizado el paradigma estructurado. Esta técnica consiste
   en basarse en un número muy bajo de expresiones repetidas, englobarlas todas
   en un procedimiento o función y llamarlo cada vez que tenga que ejecutarse.
   [(Wikipedia)](https://es.wikipedia.org/wiki/Programaci%C3%B3n_por_procedimientos)
   Engloba los conceptos de tipos de datos, operadores y expresiones,
   algoritmos, estructuras de control, funciones, constantes y variables, y
   programación modular (Cátedra).

2. Describa el tipo de dato abstracto (TDA). ¿Puede el lenguaje C trabajar con
   TDAs? Dé un ejemplo del tipo de dato abstracto en C si el lenguaje lo
   soporta, o de lo contrario indique cómo lo haría.

   Un TDA es un _encapsulamiento_ que contiene la definición de un nuevo tipo
   de datos y todas las operaciones que se pueden realizar con él. Se facilitan
   las modificaciones e incorporaciones de nuevas características o funciones
   (Cátedra).

   Si bien C no está preparado para trabajar con TDAs, pueden implementarse con
   una complejidad tal vez mayor que en otros lenguajes. Por ejemplo, podría
   declarar un TDA para trabajar con listas dinámicas de la siguiente forma:

   ```
   typedef struct list_node {
      void *elem;
      struct list_node *next;
   } list_node;

   typedef struct list {
      list_node *head;
      int count;
   } list;
   ```

   Para hacer uso de una estructura así, como mínimo necesitaría una función que
   le asigne memoria, y otra que la libere:

   ```
   list *list_new(int size) {
      list *l = NULL;

      if (size > 0 && l = malloc(sizeof(list))) {
         ...
      }

      return l;
   }

   void list_destroy(list **l) {
      if (l && *l) {
         ...
      }
   }
   ```

   Además de todas las funciones necesarias para la creación de nodos nuevos, y
   la creación del vínculo entre nodos.
   [Ver otros ejemplos en mi Github](https://github.com/nmontesoro/AyED).

<!-- ¿Puede ser que falte una pregunta sobre C++? ¿O que en vez de lenguajes
se refiera a otros paradigmas? -->

3. ¿En qué se basa la programación orientada a objetos (POO)? ¿Qué ventajas
   presenta respecto de otros lenguajes? ¿Qué características salientes posee?

   Se basa en el empleo de objetos (módulos, componentes) como elementos
   fundamentales, como una abstracción de algún hecho o ente del mundo real.
   Los objetos están compuestos por **atributos y métodos** (Cátedra).

   La POO permite separar los diferentes componentes de un programa,
   simplificando así su creación, depuración y posteriores mejoras. Disminuye
   los errores y promociona la reutilización del código.
   [(Profile)](https://profile.es/blog/que-son-los-paradigmas-de-programacion/)

   ¿Características salientes?

4. Defina clase y objeto. Explicite de qué manera se puede fijar el nivel de
   acceso a los miembros de una clase.

   Una _class_ es un TDA que puede ser considerado como una generalización de
   los _struct_ en C. Un objeto es una variable o instancia concreta de una
   determinada clase.

   El nivel de acceso a los miembros de una clase puede fijarse con los
   modificadores `public` (acceso libre), `private` (sólo por funciones y
   operadores propios de la clase) y `protected` (privados para funciones
   externas, pero públicos para clases que la hereden).

5. ¿Cómo se definen las funciones o métodos en una clase?

6. Defina Lenguaje Unificado de Modelado. ¿Qué tipos de diagramas UML conoce?
   Cree una clase, defina la visibilidad de los atributos y métodos, genere tres
   clases adicionales que hereden métodos y atributos de la clase anterior.
   Genere para esa situación un diagrama UML.

7. En C, para el manejo de archivos, utilizó `FILE *` (el cual es un TDA).
   Investigue al respecto.

# Ejercicios

1. Genere un proyecto de consola de C++ y comente las diferencias y similitudes
   que nota con un proyecto de consola de C.

2. Escriba una función en C++ que permita intercambiar los valores de dos
   variables enteras pasadas por referencia desde el main. Este problema ya se
   resolvió en Programación Estructurada usando punteros. ¿Cuál es la diferencia
   entre un puntero y una referencia? ¿Le resultó más fácil la implementación
   usando las referencias?

3. El siguiente fragmento de código muestra cómo almacenar el resultado de la
   división entre dos números enteros. Escriba dicha conversión en lenguaje C++.

   ```
   int a, b;
   float r;
   a = 5;
   b = 2;
   r = (float) a/b;
   ```

4. Realice un programa que permita saber las veces que una función fue invocada
   desde el programa principal.

5. Implementar un TDA llamado `vehiculo`, organizando la definición en un
   archivo de cabecera y su implementación en un `.c`. Utilice una estructura
   que contenga campos para representar los atributos del vehículo: marca,
   puertas, kilometraje y cilindrada, y punteros a funciones _getters_ y
   _setters_ para acceder a los atributos antes mencionados, y algunas acciones
   que puede realizar el vehículo: acelerar, frenar, prender, apagar.
   Además, son necesarias dos funciones encargadas de reservar y liberar memoria
   de forma dinámica: `crearVehiculo` y `destruirVehiculo`.

6. Implementar el mismo TDA del ejercicio 5, pero ahora usando una _class_ y una
   _struct_ de C++. ¿Qué diferencias y qué similitudes nota entre una _class_ y
   una _struct_ de C++? ¿Y entre una _struct_ de C y una de C++?
   Experimente sobre los modificadores de acceso sobre métodos y atributos: ¿Le
   resultó más fácil implementar el TDA en C++? ¿Por qué?

7. Agregue un atributo público estático llamado `valor_patente` de tipo `float`
   a la clase `vehiculo` del ejercicio 6. Luego, desde el programa principal,
   cree dos representantes o _instancias_ de tipo `vehiculo` y en una de las
   instancias cambie el valor de dicho atributo. Entonces, si usando un
   `printf` muestra el valor del mismo atributo, pero de la otra instancia, ¿qué
   valor se muestra en consola? ¿Por qué? ¿Será posible acceder al atributo en
   cuestión **sin** crear ninguna instancia de `vehiculo`? Experimente y
   comente.

8. Antes de que el genio de Stroustrup inventara el lenguaje C++ la gente
   escribió mucho código en C. ¿Conoce la forma de usar código escrito en C
   desde C++? En la clase teórica se mencionó la palabra reservada `extern`.
   Entonces, escriba un conjunto de funciones en C (los prototipos en un `.h` y
   la implementación en un `.c`) para sumar, restar, multiplicar y dividir
   enteros. Luego, escriba un programa en C++ que use dichas funciones.

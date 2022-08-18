# Preguntas orientadoras

1. ¿Qué entiende por paradigma? ¿Qué paradigma de programación utilizó hasta
   ahora? ¿Cuáles son sus características?

2. Describa el tipo de dato abstracto (TDA). ¿Puede el lenguaje C trabajar con
   TDAs? Dé un ejemplo del tipo de dato abstracto en C si el lenguaje lo
   soporta, o de lo contrario indique cómo lo haría.

<!-- ¿Puede ser que falte una pregunta sobre C++? ¿O que en vez de lenguajes
se refiera a otros paradigmas? -->

3. ¿En qué se basa la programación orientada a objetos (POO)? ¿Qué ventajas
   presenta respecto de otros lenguajes? ¿Qué características salientes posee?

4. Defina clase y objeto. Explicite de qué manera se puede fijar el nivel de
   acceso a los miembros de una clase.

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

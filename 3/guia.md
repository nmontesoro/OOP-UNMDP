# Guia 3

## Preguntas orientadoras

1. ¿Qué significa el modificador `const` situado a la derecha de los paréntesis,
en la declaración de un método?

	Según _The C++ Programming Language_, el modificador `const` en esta
	ubicación indica que la función no modifican el estado de la clase (no 
	modifican sus variables `private`). Un método `const` puede ser llamado
	en objetos `const` y no-`const`. Aquellos métodos que no son `const`
	sólo pueden ser llamados por objetos que no sean `const`.
	
2. ¿Cómo se declaran dos clases mutuamente amigas?

	Según los apuntes de teoría,
	
	> Cuando dos clases deben ser declaradas mutuamente `friend` se debe
	> utilizar una **declaración anticipada** (_forward declaration_)
	> de una de ellas en el archivo de declaración:
	>
	> ```
	> class <clase2>;
	> 
	> class <clase1>
	> {
	>     /* funciones y variables miembro de clase1 */
	>     friend clase2;
	> };
	>
	> class <clase2>
	> {
	>     /* funciones y variables miembro de clase2 */
	>     friend clase1;
	> };
	> 
	> ```

3. ¿Qué diferencia hay entre un constructor de copia y el operador de
asignación? 

	El constructor de copia inicializa un nuevo objeto copiándolo desde otro
	objeto de la misma clase. Tiene un único argumento que es una referencia
	constante al objeto fuente.
	
	No hay diferencia con el operador de asignación, excepto en el caso que
	la clase contenga punteros. Ahí se debe sobrecargar el constructor de
	copia para hacer un manejo correcto de la memoria dinámica.

4. ¿Cuándo se llama al constructor de copia?

	Se llama como:
	
	```
	tipo_clase objeto1(...);
	
	tipo_clase objeto2(objeto1);
	```
	
5. Al sobrecargar funciones miembro de una clase, ¿de qué manera deben diferir?

	Pueden diferir en cuanto a los parámetros de entrada, pero tanto el nombre
	como el tipo de dato que devuelvan deben ser iguales.

6. ¿Por qué utilizar valores predeterminados si se puede sobrecargar una
función?
	
7. ¿Qué operadores no se pueden sobrecargar en C++?

	Los únicos operadores que no se pueden sobrecargar son el punto `.`, el if
	ternario `?:`, el `sizeof`, el scope resolution `::`, y puntero a miembro
	de un objeto `.*`.

8. ¿Para qué sirve el operador `const_cast<type>`?
   
   Sirve para eliminar el modificador `const` de una referencia o un puntero.
   Actúa durante la compilación. No cambia el tipo del operando, ni permite
   que una variable constante pueda modificarse, sino que permite pasar un
   objeto constante a una función que espera una referencia.

## Ejercicios

1. Escribir un programa en C++ que permite realizar operaciones con números
complejos: suma, resta, multiplicación y división. Además, a cualquier número
complejo se le puede pedir su módulo y ángulo. Este último deberá pertenecer
al intervalo [0, 2pi].

2. Observe el programa que sigue y piense cuál será su salida. Luego, escriba
el código en su IDE favorito, compile y ejecute para verificar lo que usted
pensó.

	(Ver `3/practica/2`)
	
	El output es:
	
	> [naza@archlinux 2]$ ./test.out 
    > I saw Elvis in a UFO. 
    > Size = 22
    > Capacity = 22
    > I thought I saw Elvis in a UFO. 
    > Size = 32
    > Capacity = 44
    > I thought I saw Elvis in a UFO. I've been working too hard.
    > Size = 59
    > Capacity = 500
	
3. El siguiente programa usa las funciones `insert`, `find` y `replace` del
objeto `string`. Estudie las sentencias `assert` y verifique su funcionamiento.
Piense las diferencias entre insertar y reemplazar una cadena en otra. ¿Cómo
trabaja la función `replace`?

	Ver `3/practica/3.cpp`. Los `assert` sirven para testear hipótesis hechas
	por el programador. Si la condición que evalúan no se cumple, entonces
    se aborta la ejecución del programa.
	
4. Modifique el programa del ejercicio 3 para poder reemplazar un string 
ingresado por teclado dentro del string `s`. Se debe controlar que la cadena
ingresada por teclado exista dentro de la cadena `s`. ¿Qué sucede con el tamano
del string `s`si la cadena a reemplazar tiene un tamano igual o menor que el de
la cadena reemplazada? ¿Aumenta, disminuye o se mantiene el tamano de `s`? ¿Se
le ocurre un caso en el que el reemplazo haga que el tamano de `s` pueda
aumentar?

	

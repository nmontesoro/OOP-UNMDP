# Guía 4 - Herencia

## Preguntas orientadoras

1. Explique con sus palabras el concepto de herencia.

    Herencia es un mecanismo para derivar una clase de otras que comparten una 
    serie de métodos y atributos. Permite ahorrar trabajo al programar, ya que 
    los métodos y atributos compartidos sólo deben ser definidos en la clase
    base, y estarán disponibles para ambas.

2. ¿Cuál es la relación entre los conceptos de clase, subclase y superclase?

    Una subclase es una clase derivada de una superclase (o clase base).

3. En el lenguaje C++, la derivación es una forma de expresar la relación `...`.

4. Una clase derivada es una `...` de una clase base.

5. ¿Para qué se utiliza la palabra clave `protected`?

    Para declarar un atributo o método de forma tal que las clases derivadas
    puedan acceder a él, pero que se comporte como `private` para todo el resto
    del código.

6. Los datos y miembros protegidos son completamente `...` para las clases 
derivadas.

7. Las subclases pueden `...` el comportamiento de su superclase.

8. ¿Puede una clase derivada hacer que la función pública de una clase base sea
privada?

## Ejercicios

1. Modele una clase denominada `polar`, que represente a los números complejos
en forma polar.

    > *Nota:* `polar` deriva de `complejo`, la clase que usted programó en el
    ejercicio 1 de la Unidad 3. En el proyecto se debe reutilizar la
    implementación de la clase `complejo` mediante el archivo binario
    (extensión `.o`). La definición de la clase `polar` deberá contener la
    interfaz y los atributos mostrados en la imagen que sigue.

    (Ver `4/practica/1`)

2. Implemente la clase `becario` vista en teoría. Analice todas las ambigüedades
que puedan surgir al escribir el programa que prueba dicha clase.

3. Implemente en lenguaje C++ el siguiente diagrama UML.

4. Encuentre diferentes maneras de corregir el error del siguiente programa para
que imprima el valor `10`:

    (Ver `4/practica/4`)

5. Se desea modelar una empresa con empleados. Una empresa conoce a todos sus
empleados, y estos pueden ser de planta permanente o temporaria. Además hay
gerentes, que también son empleados de planta permanente pero siguen un régimen
salarial particular.

    - Cuando un empleado es de planta permanente cobra la cantidad de horas
    trabajadas por $30, más antigüedad ($10 por año de antigüedad), más salario
    familiar.

    - Cuando es de planta temporaria, no cobra antigüedad y cobra la cantidad de
    horas trabajadas por $20, más salario familiar.

    - El salario familiar es $20 por cada hijo, los empleados casados además
    cobran $10 por su esposa/o.

    - Un gerente cobra de manera similar a un empleado de planta permanente,
    pero su hora trabajada vale $40. Por antigüedad se le pagan $15 por año,
    mientras que el salario familiar es el mismo que el de los empleados de
    planta permanente y temporal.

    a) Realizar un diagrama de clases.

    b) Implementar el método `montoTotal` en la clase `Empresa`, que retorna el
    monto total que la empresa debe pagar en concepto de sueldos a sus empleados
    (definir e implementar todas las clases y métodos necesarios).

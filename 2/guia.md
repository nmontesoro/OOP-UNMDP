# Guía 2
## Preguntas orientadoras

1. Mencione y defina los tipos de ámbitos de las variables que se presentaron
en la teoría. ¿Por qué definiría como global una variable de tipo `static`?

Según _The C++ Programming Language_, los ámbitos (_scopes_) son:

- **Local**: una variable declarada en una función o lambda. Su ámbito se
extiende desde su declaración hasta el fin del bloque que la contiene
(delimitado por `{}`).

- **De clase**: se conoce como miembro a la variable que es definida en una
clase por fuera de cualquier otra función, clase, enumerador u otro 
_namespace_. Su ámbito se extiende desde el punto de declaración hasta el fin
del _namespace_.

- **Global**: cuando una variable es definida por fuera de una función, clase,
enumerador o _namespace_. Su ámbito se extiende desde el punto de declaración
hasta el fin del archivo donde ésta ocurre. 

- **De sentencia (_statement scope_)**: si se la define dentro de los `()` en
un `for`, `while`, `if` o `switch`. Se extiende desde la declaración hasta el
fin de la sentencia. Todas las variables de este ámbito son variables locales.

- **De función (_function scope_)**: El ámbito de un _label_ es desde su 
declaración hasta el fin de la función (ver sección 9.6 sobre `goto`s).

Declarar una variable global como `static` implicaría que cada archivo `*.cpp`
tenga su propia copia de la variable. Ver 
[StackOverflow](https://stackoverflow.com/a/14349916).

2. ¿Qué modificador elegiría para indicar que una variable puede cambiar su 
valor entre accesos aún cuando no pareciera haber sido modificado? ¿En qué 
aplicaciones se utiliza este modificador?

El modificador `volatile`, que indica al compilador que no debe optimizar 
lecturas y escrituras de una variable que podrían parecer redundantes. Se 
utiliza en la escritura de código de bajo nivel, que requiere acceso directo al
hardware (por ejemplo, leer los datos de una placa de adquisición).

3. ¿Por qué puede ser que el operador `new` retorna un puntero y no una 
referencia? _Ayuda: piense en la diferencia entre punteros y referencias para
encontrar la respuesta._

Porque las referencias sólo pueden ser asignadas una vez, mientras que el valor
de un puntero puede cambiar de acuerdo a las necesidades del programador.

4. Indique cuál es la función de los constructores y para qué existen los
destructores.

Los constructores se utilizan para definir cómo deberán inicializarse los 
objetos de una clase determinada. Los destructores se encargan de la "limpieza",
cuando el objeto ya no es necesario y se requiere liberar la memoria asignada a
éste.

5. Llene los espacios en blanco:

    - Se tiene acceso a los miembros de la clase vía el operador (`.`) en 
    conjunción con un objeto de clase o vía el operador (`->`) en conjunción con
    un apuntador a un objeto de clase.

    - Los miembros de una clase especificados como (`private`) son sólo 
    accesibles a las funciones miembro de la clase y amigos de la clase.

    - Un (constructor) es una función miembro especial utilizada para 
    inicializar los miembros datos de una clase.

    - El acceso por omisión para los miembros de una clase es ().

    - Los miembros de una clase especificados como (`static`) son accesibles en 
    cualquier parte en que un objeto de la clase esté en alcance.

    - El operador (`new`) asigna dinámicamente memoria para un objeto de un tipo
    específico y regresa un (puntero) a dicho tipo.

    - Las operaciones de entrada son soportadas por la clase (`istream`).

    - Las operaciones de salida son soportadas por la clase (`ostream`).

6. Encuentre el o los errores y corrija:

    ```
    void ~Time(int);

    \* Suponga la siguiente definición parcial de la clase Time *\
    class Time
    {
    public:
        // Function prototypes

    private:
        int hour = 0;
        int minute = 0;
        int second = 0;
    };
    ```

7. ¿Se pueden utilizar los nombres definidos en un espacio de nombres sin
utilizar la palabra reservada `using`?

## Ejercicios

1. ¿Qué inconveniente presenta el programa que se muestra a continuación?
Discuta las posibles soluciones.

    ```
    int main(int argc, char *argv[])
    {
        string cadena;
        cin >> cadena;
        getline(cin, cadena);
        cout << "La cadena ingresada es: " << cadena << endl;
        return 0;
    }
    ```

2. ¿Qué está mal en este programa? Mencione tres formas de corregirlo.

    ```
    #include <iostream>

    int main()
    {
        cout << "¡Hola, mundo!" << endl;
        return 0;
    }
    ```

3. Crear la clase `Fecha` con todos los datos miembro y atributos que se 
muestran en el diagrama siguiente, y luego crear un programa cliente que
demuestre el uso de cada una de las funciones.

    | Fecha                                                      |
    |------------------------------------------------------------|
    | `day: int`                                                 |
    | `month: int`                                               |
    | `year: int`                                                |
    | `+ Fecha()`                                                |
    | `+ setFecha(in day:int, in month:int, in year: int): void` |
    | `+ setMonth(in month:int): void`                           |
    | `+ setYear(in year:int): void`                             |
    | `+ ingresarFecha(): void`                                  |
    | `+ imprimir_la(): void`                                    |
    | `+ imprimir_us(): void`                                    |
    | `+ imprimir_letras(): void`                                |
    | `+ mesLetras(): char *`                                    |
    | `+ validarFecha(): bool`                                   |

4. Crear la clase `Tiempo` con todos los datos miembro y atributos que se 
muestran en el diagrama que sigue, y luego crear un programa cliente que 
muestre el uso de cada una de las funciones.

    (Ver diagrama en documento original)

5. El siguiente diagrama muestra un concepto fundamental de la Programación
Orientada a Objetos: **la composición**. Implementar la clase `Empleado` y 
escribir un programa que imprima en pantalla la siguiente información:

    ```
    Perez, Juan
    Contratado el: 1 de julio de 1999
    Fecha de nacimiento: 31 de diciembre de 1978

    Lopez, Pedro
    Contratado el: 1 de julio de 1999
    Fecha de nacimiento: 25 de febrero de 1980

    Presione una tecla para continuar...
    ```

    (Ver diagrama en documento original)

6. En una competencia de ciclismo intervienen un número desconocido de 
deportistas. Cada uno realiza dos pruebas, una por tiempo y otra por número de
vueltas. Se deben registrar los siguientes datos de cada participante: nombre, 
fecha de nacimiento, tiempo en la primera prueba, y número de vueltas en la 
segunda prueba. Imprimir en pantalla el nombre del participante que realizó la
primera prueba en el menor tiempo, el nombre del participante que hizo la mayor
cantidad de vueltas, y cinco columnas en las que se muestre para cada 
participante:

    - Nombre
    - Edad
    - Tiempo en la primera prueba
    - Número de vueltas en la segunda prueba
    - Diferencia de tiempo respecto del más rápido en la primera prueba
    - Diferencia de vueltas respecto del que hizo más vueltas en la segunda
    prueba

    Se pide implementar un programa en lenguaje C++, orientado a objetos, que
    resuelva el problema. Además, se pide el diagrama de clases y de secuencia.

    _Nota: en todos los ejercicios se deben instanciar los objetos en la memoria
    heap._
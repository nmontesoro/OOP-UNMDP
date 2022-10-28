# Unidad 6

## Flujos y excepciones

### Preguntas orientadoras

1. Uno de los principales objetivos de los flujos (_streams_) es `?`.

2. Escribir en el disco (y en la pantalla, anque en menor extensión) es muy "costoso". Lleva mucho tiempo (relativamente hablando) escribir información en el disco o leer información del disco, y la ejecución del programa por lo general se bloquea debido a las lecturas y escrituras de disco. ¿Cómo se soluciona este problema?

3. Como es de esperarse, C++ se basa en el método orientado a objetos para implementar los flujos y los buffers. Explique el objetivo de las siguientes clases:

- `streambuf`
- `ios`
- `istream` y `ostream`
- `iostream`
- `fstream`

4. ¿Qué es el operador de extracción y qué hace?

5. ¿Cuáles son las tres formas de utilizar `cin.get()` y cuáles son sus diferencias?

6. ¿Cuál es la diferencia entre `cin.read()` y `cin.getline()`?

7. ¿Cuál es el ancho predeterminado para enviar como salida un entero largo mediante el operador de inserción?

8. ¿Cuál es el valor de retorno del operador de inserción?

9. ¿Qué parámetro lleva el constructor para un objeto `ofstream`?

10. ¿Qué hace el argumento `ios::ate`?

    Según el estándar C++11, `ios::app` indica que todas las operaciones
    de escritura se realizarán al final del archivo, mientras que 
    `ios::ate:` abre el archivo y hace un _seek_ hacia el final una única
    vez, inmediatamente luego de abrirlo.

11. Cuando inicia un programa de C++ que incluye la clase `iostream` se crean e inicializan cuatro objetos de E/S estándar. ¿Cuáles son?

12. ¿Qué es una excepción?

    Según Stroustrup, una excepción es una herramienta que permite obtener
    información desde el punto en donde se genera un error a un punto en 
    donde puede ser manejada. Una función que no puede lidiar con un problema
    _lanza_ una excepción, esperando que quien la llamó pueda manejar el
    problema, haciendo una intercepción o _catch_.

13. ¿Qué es un bloque `try`?

    Un bloque `try` es un bloque de código que ejecuta funciones y, 
    en caso de que alguna de ellas lance una excepción, la deriva al bloque
    `catch`.

14. ¿Qué es una instrucción `catch`?

    Permite interceptar una excepción de algún tipo determinado y ejecutar
    código específico para manejar el error.

15. ¿Qué información puede contener una excepción?

    Todas las excepciones que hereden de la clase base `exception` pueden
    sobrecargar el método `what` para proveer información específica
    sobre el error que se generó.

    Uno podría, además, declarar una clase que herede de `exception`
    y que tenga más información. Por ejemplo, el nombre del archivo al que
    no se pudo acceder.

16. ¿Cuándo se crean los objetos de excepción?

17. ¿Se deben pasar las excepciones por valor o por referencia?

18. ¿Atrapará una instrucción `catch` una excepción derivada si está buscando
la clase base?

    Sí.

19. ¿Qué significa `catch(...)`?

    Significa _interceptar_.

20. ¿Por qué preocuparse por producir excepciones? ¿Por qué no manejar el error
donde ocurre?

    Porque permite que el usuario de una librería determine los pasos a seguir,
    otorgándole mayor flexibilidad.

21. ¿Por qué generar un objeto? ¿Por qué no solo pasar un código de error?

22. ¿Se tiene que atrapar una excepción en el mismo lugar en el que el bloque `try` la creó?

### Ejercicios

1. Explique cada línea del siguiente fragmento de código:

```cpp
double leerDouble()
{
    cin.exceptions(ios::failbit | ios::badbit);

    double dato = 0.0;
    try
    {
        cin >> dato;
    }
    catch (ios_base::failure &e)
    {
        cout << e.what() << ": dato no valido" << endl;
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
    }

    return dato;
}
```

2. Cree un bloque `try`, una instrucción `catch` y una excepción simple.

3. Modifique la respuesta del ejercicio 2, coloque datos en la excepción junto con una función getter y utilícela en el bloque `catch`.

4. Modifique la clase del ejercicio 3 para que sea una jerarquía de excepciones. Cambie el bloque `catch` para utilizar los objetos derivados y los objetos base.

5. Escriba un programa que tome un nombre de archivo como parámetro y que abra el archivo para lectura. Lea todos los caracteres del archivo y despliegue en pantalla sólo las letras y los signos de puntuación (ignore todos los caracteres no imprimibles).

6. Escriba un programa que tome un nombre de archivo como parámetro y que abra el archivo para lectura. Lea todos los bytes y presente en pantalla la información en formato hex, como se muestra a continuación. Además, genere un nuevo archivo de texto y guarde la información presentada en pantalla respetando el mismo formato.

7. Realizar un programa que permita crear un archivo nuevo, abrir uno existente, agregar, buscar, modificar y borrar registros. El nombre del archivo será ingresado por teclado. Cada registro del archivo será un objeto `persona` con los atributos `nombre`, `direccion` y `telefono`. Asimismo, para que el usuario pueda elegir cualquiera de las opciones mencionadas, el programa visualizará en pantalla un menú similar al siguiente:

```
Archivo actual: ninguno
--------------------------------------------------------------------------------

    1. Nuevo archivo
    2. Abrir archivo
    3. Agregar registro
    4. Buscar un registro
    5. Buscar siguiente
    6. Modificar un registro
    7. Eliminar un registro
    8. Salir
--------------------------------------------------------------------------------

Opción (1-8): 1

Nombre del archivo: telefonos.dat
```

La opción _Nuevo_ abrirá un archivo para agregar registros; si el archivo existe, preguntará si se desea sobrescribir.

La opción _Abrir_ permitirá abrir un archivo para leer y escribir o para agregar; estas dos opciones se elegirán de un menú.

La opción _Buscar_ permitirá buscar un registro por el campo `nombre`; se permitirá introducir una subcadena de `nombre`, incluso vacía.

La opción _Buscar siguiente_ buscará el siguiente registro que cumpla con las mismas condiciones que el anteriormente buscado.

Finalmente, la opción `Eliminar` permitirá marcar un registro para borrar. Se deberá realizar al menos un método para cada una de las opciones, excepto para las opciones _Buscar_ que compartirán ambas el mismo, y para _Salir_.

**Nota:** En todos los programas use excepciones para manejar situaciones anómalas.

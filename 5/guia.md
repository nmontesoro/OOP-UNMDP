# Unidad 5: Polimorfismo

## Teoría

1. ¿Qué es el polimorfismo?

    Es la capacidad de los objetos de responder al mismo mensaje en función
    de los parámetros utilizados durante su invocación o de la clase a la cual
    pertenece. Se puede invocar a una función de un objeto sin especificar su 
    tipo exacto. Por ejemplo al invocar `Figura.Dibujar()` se dibujará un
    círculo, un rectángulo o un polígono dependiendo del objeto heredado de
    la clase `Figura` que llame a la función.

2. Según lo que se vio en clase, ¿por qué no hacer que todas las
   funciones de una clase sean virtuales?

   Porque podría tener consecuencias graves en cuanto a performance. Por un
   lado, al hacer uso de una `VTable`, el llamado a un método del objeto se
   vuelve indirecto, lo que causa una pequeña diferencia de velocidad respecto
   de una función no declarada como `virtual`. Pero el problema más grave 
   radica en que el compilador no puede optimizar este tipo de funciones
   haciéndolas `inline`. Ver [StackOverflow](https://stackoverflow.com/questions/292124/is-there-any-reason-not-to-make-a-member-function-virtual).

3. ¿Qué es el enlace dinámico?

   La asociación se realiza en tiempo de ejecución (redefinición de métodos).
   Las funciones polimórficas se declaran de la misma manera en distintas 
   clases que las definen en forma diferente.

4. ¿Qué es una tabla v o `VTable` y para qué sirve?

   Una _Virtual Method Table_ o `VTable` es un mecanismo utilizado en un
   lenguaje de programación para soportar el enlace dinámico. Cuando una clase
   declara una función como `virtual`, la mayoría de los compiladores agregan
   una variable miembro oculta que apunta a un array de punteros a funciones.
   Estos punteros se usan en tiempo de ejecución para invocar la implementación
   adecuada.

5. ¿Qué es un destructor virtual?

   Los destructores virtuales son útiles cuando podría ocurrir que se elimine
   una instancia de una clase derivada a través de un puntero a la clase base.
   Si el destructor es declarado como `virtual`, las clases derivadas lo
   sobrescriben, entonces se ejecutará el código correcto.

6. ¿Qué ocurre si se está dentro de un constructor y se llama a una
   función virtual?

   Se produce un error de compilación. Dado que la VTable no existe aún, el
   compilador no sabe a qué función llamar.

7. ¿Cómo se puede crear un constructor virtual de copia?

   Los constructores no pueden ser virtuales, por lo que si se necesitara
   implementar en las clases derivadas el constructor de copia, se debería crear
   una función virtual `clonar` en la clase base y redefinirla en la clase
   derivada.

8. Si una clase base declara una función como `virtual`, y una clase
   derivada no utiliza el término `virtual` cuando redefina esa función,
   ¿seguirá siendo `virtual` cuando la herede una clase de tercera
   generación?

   Sí, la función continúa siendo `virtual`. De todas formas se acostumbra
   agregar dicha palabra para que el código sea más claro.

9. ¿Por qué es malo cambiar el tipo de un objeto en tiempo de ejecución?

   Se explica en [Bototobogo](https://www.bogotobogo.com/cplusplus/upcasting_downcasting.php).
   En el caso de _upcasting_ ocurre el _object slicing_, mientras que en el
   _downcasting_ se podría llegar a dar una operación no segura si la clase
   base no cuenta con el método esperado de la clase derivada.

10. ¿Qué entiende por _upcasting_ y _downcasting_?

11. Investigue sobre el _object slicing_.

12. ¿Cómo se puede prevenir el _object slicing_?

13. ¿Qué significa filtrar la funcionalidad de manera ascendente?

14. ¿Es bueno utilizar siempre la filtración ascendente?

15. Si un rectángulo "redondo" tiene bordes rectos y esquinas
    redondeadas, y su clase `RectRedondo` hereda tanto de `Rectangulo` como
    de `Circulo`, y éstos a su vez heredan de `Figura`, ¿cuántas `Figura`s
    se crearán cuando cree un `RectRedondo`?

## Ejercicios

1.  Escriba un programa que derive un `Auto` y un `Camion` de la clase
    `Vehiculo`. Convierta a `Vehiculo` en un ADT que tenga dos funciones
    virtuales puras. Haga que `Auto` y `Camion` no sean ADTs.

2.  Modifique el programa del inciso 1 para que `Auto` sea un ADT, y
    derive de `Auto` a `AutoDeportivo`, `Furgoneta` y `Sedan`. En la clase
    `Auto`, proporcione una implementación para una de las funciones
    virtuales puras de `Vehiculo` y hágala no pura.

3.  Modele una clase que represente una cuenta bancaria que tenga un
    saldo y un titular, y que pueda realizar operaciones de extracciones y
    depósitos. Una vez modelada la clase `Cuenta`, modele la clase `Banco`
    que contiene un conjunto de `Cuenta`s, e implemente el mensaje que
    le permita saber cuál es el activo disponible del `Banco`. Es decir, la
    suma de los saldos de las cuentas. Existen dos tipos de cuentas
    bancarias: cuentas corrientes y cajas de ahorro.

    Si revisamos el comportamiento nos encontraremos con las siguientes
    características en común:

    - Ambas llevan cuenta de su saldo
    - Ambas permiten realizar depósitos
    - Ambas permiten realizar extracciones

    Pero cada una tiene un tipo de restricción distinto en cuanto a las
    extracciones:

    - Cuentas corrientes: permiten que el cliente gire en descubierto (con
      un tope pactado con cada cliente)
    - Cajas de ahorro: poseen una cantidad máxima de extracciones mensuales
      (para todos los clientes). No se permite girar en descubierto.
    - Cuentas universitarias: permiten extracciones de no más de $100
      diarios.

    Modele estas clases y los métodos correspondientes.

4.  Se pide que implemente el "calculador impositivo" con el que una
    persona puede calcular su impuesto. El calculador funciona así:

    - El usuario configura (inicializa) el calculador indicando su
      nombre y su categoría.
    - El usuario carga, una a una, las facturas de cada servicio que ha
      brindado, incluyendo detalle del servicio, número de factura y
      monto.
    - El usuario pide al calculador que calcule el impuesto para todas
      las facturas cargadas cuyos números se encuentren entre dos que él
      indica como parámetros.

    Como resultado, se obtiene un objeto `ReciboDePago` que entiende los
    mensajes `nombreDelContribuyente()`, `montoTotal()`, `montoFijo()`,
    `montoVariable()`, `primeraFacturaConsiderada()`,
    `ultimaFacturaConsiderada()`.

    El impuesto se calcula así:

    - Todos los contribuyentes abonan un monto fijo por pago. Dicho
      monto es idéntico para todos y se actualiza regularmente.
      Inicialmente, el monto es de $5.
    - Además, cada contribuyente paga un monto variable, relativo
      a sus ingresos, de acuerdo a la categoría en la que se
      inscribió. Los contribuyentes inscriptos como "Limitado" son
      los que menos pagan (0.5% de lo facturado). Los contribuyentes
      inscriptos en categoría "Completo" abonan un 50% por cada
      servicio facturado cuyo monto supere los $5000. Los que más
      pagan son los "Extendidos". Ellos pagan igual que los Completos,
      pero a eso se agrega $10 por cada servicio facturado.

    1. Implemente en C++ todas las clases necesarias para proveer la
       funcionalidad antes descripta.

    2. Construya un programa de test que demuestre:

       - Correcta inicialización del sistema
       - Funcionamiento correcto de la carga de facturas
       - Funcionamiento correcto de la generación del recibo de pago

    3. Construya un diagrama de clases UML donde quede claro qué clases
       componen el sistema, de qué forma se relacionan, herencia y
       atributos.

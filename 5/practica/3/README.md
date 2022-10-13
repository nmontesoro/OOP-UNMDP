En realidad es una mala implementación de la clase `Banco`. Si quisiera acceder
a cada cuenta individual para hacer una extracción, a través del vector
`cuentas_`, al llamar al método `Extraer` estaría saltando las restricciones
impuestas porque estoy haciendo _upcasting_ de `CuentaCorriente` o 
`CajaAhorro` a `Cuenta`.

Lo correcto tal vez sería que dentro de la clase `Banco` hubiera un vector
para cada tipo de cuenta, y sobrecargar `AgregarCuenta` para que tome
tanto `CuentaCorriente` como `CajaAhorro` como parámetro.

De todas formas cumple con la consigna, que era sólo determinar los activos
del `Banco` haciendo una suma de todos los saldos de las cuentas.

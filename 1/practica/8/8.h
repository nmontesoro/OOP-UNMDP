/*
8. Antes de que el genio de Stroustrup inventara el lenguaje C++ la gente
   escribió mucho código en C. ¿Conoce la forma de usar código escrito en C
   desde C++? En la clase teórica se mencionó la palabra reservada `extern`.
   Entonces, escriba un conjunto de funciones en C (los prototipos en un `.h` y
   la implementación en un `.c`) para sumar, restar, multiplicar y dividir
   enteros. Luego, escriba un programa en C++ que use dichas funciones.
*/

#ifdef __cplusplus
extern "C"
{
#endif
    int add(const int a, const int b);
    int subtract(const int a, const int b);
    int multiply(const int a, const int b);
    float divide(const int a, const int b);
#ifdef __cplusplus
}
#endif

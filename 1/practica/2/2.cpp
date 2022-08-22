/*
2. Escriba una función en C++ que permita intercambiar los valores de dos
   variables enteras pasadas por referencia desde el main. Este problema ya se
   resolvió en Programación Estructurada usando punteros. ¿Cuál es la diferencia
   entre un puntero y una referencia? ¿Le resultó más fácil la implementación
   usando las referencias?
*/

void swap(int &a, int &b);

void swap(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

int main(int argc, char **argv)
{
    int a = 3, b = 4;

    swap(a, b);

    return 0;
}

/*
3. El siguiente fragmento de código muestra cómo almacenar el resultado de la
   división entre dos números enteros. Escriba dicha conversión en lenguaje C++.

   ```
   int a, b;
   float r;
   a = 5;
   b = 2;
   r = (float) a/b;
   ```
*/

int main(int argc, char **argv)
{
    int a = 5, b = 2;
    float r = (float)a / b;  // C-style

    r = float(a) / float(b);  // C++-style

    return 0;
}

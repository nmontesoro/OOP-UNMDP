/*
4. Realice un programa que permita saber las veces que una función fue invocada
   desde el programa principal.
*/

#include <iostream>

using namespace std;

void foo()
{
    static int times_called = 0;

    cout << "Function 'foo' has been called " << ++times_called << " times."
         << endl;
}

int main(int argc, char **argv)
{
    foo();
    foo();
    foo();
    return 0;
}

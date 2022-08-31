#include <iostream>
#include <string>

#include "Empleado.h"

using namespace std;
using namespace oop;

int main()
{
    string fn = "Juan", ln = "Perez", dni = "99.999.999",
           address = "123 Fake St.";

    Empleado emp1 = Empleado(fn, ln, 31, 12, 1978, address, dni, 1, 7, 1999);

    fn = "Pedro";
    ln = "Lopez";

    Empleado emp2 = Empleado(fn, ln, 25, 2, 1980, address, dni, 1, 7, 1999);

    cout << emp1 << endl << endl << emp2 << endl;

    return 0;
}

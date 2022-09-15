#include <iostream>
using namespace std;

class ClaseA
{
public:
    ClaseA() : valorA(10) {}
    int LeerValor() const { return valorA; }

protected:
    int valorA;
};

class ClaseB
{
public:
    ClaseB() : valorB(20) {}
    int LeerValor() const { return valorB; }

protected:
    int valorB;
};

class ClaseC : public ClaseA, public ClaseB
{
};

int main()
{
    ClaseC CC;

    /* ----- Línea original -----
     * cout << CC.LeerValor() << endl;
     * Se quiere acceder a valorA, pero el método LeerValor existe en ambas
     * clases
     */

    /* Solución 1: usar el operador de scope */
    cout << CC.ClaseA::LeerValor() << endl;

    /* Solución 2: castear CC a un objeto de ClaseA */
    ClaseA &CA = CC;
    cout << CA.LeerValor() << endl;

    return 0;
}

#include <cassert>
#include <iostream>

#include "racional.h"

using namespace std;

int main()
{
    CRacional a, b(3, 7), c;
    int d = 3;
    double x = 2.0;

    cout << "Testing constructors... " << endl;
    assert(a.GetNum() == 0);
    assert(a.GetDen() == 1);
    assert(b.GetNum() == 3);
    assert(b.GetDen() == 7);
    cout << "\tDone." << endl;

    cout << "Testing assignment... " << endl;
    a = CRacional(3, 4);
    assert(a.GetNum() == 3);
    assert(a.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing binary addition... " << endl;
    c = a + b;
    assert(c.GetNum() == 33);
    assert(c.GetDen() == 28);
    cout << "\tDone." << endl;

    cout << "Testing += operator... " << endl;
    c += b;
    assert(c.GetNum() == 315 && c.GetDen() == 196);
    cout << "\tDone." << endl;

    cout << "Testing static_cast... " << endl;
    c = a + static_cast<CRacional>(d);
    assert(c.GetNum() == 15 && c.GetDen() == 4);
    c = static_cast<CRacional>(d) + a;
    assert(c.GetNum() == 15 && c.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing addition operator (with double)... " << endl;
    c = x + a;
    assert(c.GetNum() == 11 && c.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing logical operators..." << endl;
    assert(a != b && !(a < b) && a > b);
    cout << "\tDone." << endl;

    cout << "Testing prefix addition... " << endl;
    c = ++a;
    assert(a.GetNum() == 7 && a.GetDen() == 4 && c.GetNum() == 7 &&
           c.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing postfix addition... " << endl;
    c = a++;
    assert(a.GetNum() == 11 && a.GetDen() == 4 && c.GetNum() == 7 &&
           c.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing prefix subtraction... " << endl;
    c = --a;
    assert(a.GetNum() == 7 && a.GetDen() == 4 && c.GetNum() == 7 &&
           c.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing postfix subtraction... " << endl;
    c = a--;
    assert(a.GetNum() == 3 && a.GetDen() == 4 && c.GetNum() == 7 &&
           c.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing unary - operator... " << endl;
    c = -a;
    assert(c.GetNum() == -3 && c.GetDen() == 4);
    cout << "\tDone." << endl;

    cout << "Testing c = -a + b... " << endl;
    c = -a + b;
    assert(c.GetNum() == -9 && c.GetDen() == 28);
    cout << "\tDone." << endl;

    cout << "Testing * operator... " << endl;
    c = a * b;
    assert(c.GetNum() == 9 && c.GetDen() == 28);
    cout << "\tDone." << endl;

    cout << "Testing / operator... " << endl;
    c = a / b;
    assert(c.GetNum() == 21 && c.GetDen() == 12);
    cout << "\tDone." << endl;

    cout << "Testing cast down to double... " << endl;
    x = c;
    assert(x == 1);
    cout << "\tDone." << endl;

    cout << "Congratulations! Your code is not complete rubbish!" << endl;

    return 0;
}

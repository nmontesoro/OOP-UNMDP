#include <iostream>

#include "MesaRedonda.h"

int main()
{
    oop::MesaRedonda mr1(1, 2, 6);

    std::cout << mr1.Alto() << "\n"
              << mr1.Area() << "\n"
              << mr1.Color() << std::endl;

    return 0;
}

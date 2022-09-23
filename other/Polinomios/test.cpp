#include <fstream>
#include <iostream>

#include "Polinomio.h"

int main()
{
    double coefs1[]{3, 2, 4}, coefs2[]{5, -4, 8, 7, 6};
    oop::Polinomio p1{2, coefs1}, p2{4, coefs2};

    std::cout << p1 << "\n" << p2 << "\n" << std::endl;

    std::ofstream ofs{"test.dat", std::ios::binary};

    ofs << p1 << p2;

    ofs.close();

    oop::Polinomio p3, p4;

    std::ifstream ifs{"test.dat", std::ios::binary};

    ifs >> p3 >> p4;

    ifs.close();

    std::cout << p3 << "\n" << p4 << "\n" << std::endl;

    return 0;
}

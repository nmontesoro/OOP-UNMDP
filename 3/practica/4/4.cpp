#include <iostream>
#include <string>

int main()
{
    std::string original, sought, replacement, result;
    std::size_t pos = std::string::npos;

    std::cout << "Ingrese el string original: ";
    std::getline(std::cin, original);

    std::cout << std::endl << "Ingrese el string a reemplazar: ";
    std::getline(std::cin, sought);

    std::cout << std::endl << "Ingrese el string de reemplazo: ";
    std::getline(std::cin, replacement);

    if ((pos = original.find(sought)) != std::string::npos)
    {
        result = original;
        result.replace(pos, std::string::npos, replacement);
    }
    else
    {
        std::cout << "\"" << sought << "\" no forma parte de \"" << original
                  << "\"." << std::endl;
    }

    return 0;
}

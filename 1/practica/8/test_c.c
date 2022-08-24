#include <stdbool.h>

#include "8.h"

int main(int argc, char **argv)
{
    int a = 4, b = 5;
    bool success = true;

    success &= (add(a, b) == 9) && (subtract(a, b) == -1) &&
               (multiply(a, b) == 20) && (divide(a, b) == 4 / 5);

    return !success;
}

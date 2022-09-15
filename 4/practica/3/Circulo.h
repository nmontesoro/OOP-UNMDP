#ifndef LIB_CIRCULO
#define LIB_CIRCULO

namespace oop
{
    class Circulo
    {
    private:
        double Radio_;
        static const double Pi_;
        Circulo();

    public:
        Circulo(const double radio);
        double Area() const;
    };
}

#endif

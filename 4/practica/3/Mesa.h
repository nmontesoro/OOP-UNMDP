#ifndef LIB_MESA
#define LIB_MESA

namespace oop
{
    class Mesa
    {
    private:
        double Altura_;
        Mesa();

    public:
        Mesa(const double altura);
        double Alto() const;
    };
}

#endif

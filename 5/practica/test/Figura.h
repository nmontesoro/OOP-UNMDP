#ifndef LIB_FIGURA
#define LIB_FIGURA

namespace oop
{
    class Figura
    {
    public:
        Figura();
        virtual ~Figura();
        void SetI(int i);
        int GetI() const;

    private:
        int i_;
    };
}

#endif

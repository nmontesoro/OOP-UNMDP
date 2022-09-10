#include <iostream>

namespace oop
{
    class Complex
    {
    private:
        double re_;
        double im_;

    public:
        Complex(double re = 0, double im = 0);

        double GetReal() const;
        double GetImaginary() const;

        void SetReal(const double &re);
        void SetImaginary(const double &im);

        Complex &operator=(const Complex &rhs);
        Complex &operator+=(const Complex &rhs);
        Complex &operator-=(const Complex &rhs);
        Complex &operator*=(const Complex &rhs);
        Complex &operator/=(const Complex &rhs);

        double abs() const;
        double arg() const;
    };
}

const oop::Complex operator+(const oop::Complex &lhs, const oop::Complex &rhs);
const oop::Complex operator-(const oop::Complex &lhs, const oop::Complex &rhs);
const oop::Complex operator*(const oop::Complex &lhs, const oop::Complex &rhs);
const oop::Complex operator/(const oop::Complex &lhs, const oop::Complex &rhs);
std::ostream &operator<<(std::ostream &s, const oop::Complex &c);

#include "Complex.h"

#include <cmath>

oop::Complex::Complex(double re, double im)
{
    re_ = re;
    im_ = im;
}

double oop::Complex::GetReal() const { return re_; }
double oop::Complex::GetImaginary() const { return im_; }

const oop::Complex operator+(const oop::Complex &lhs, const oop::Complex &rhs)
{
    return oop::Complex(lhs.GetReal() + rhs.GetReal(),
                        lhs.GetImaginary() + rhs.GetImaginary());
}

const oop::Complex operator-(const oop::Complex &lhs, const oop::Complex &rhs)
{
    return oop::Complex(lhs.GetReal() - rhs.GetReal(),
                        lhs.GetImaginary() - rhs.GetImaginary());
}

const oop::Complex operator*(const oop::Complex &lhs, const oop::Complex &rhs)
{
    double a = lhs.GetReal(), b = lhs.GetImaginary(), c = rhs.GetReal(),
           d = rhs.GetImaginary(), re = a * c - b * d, im = a * d + b * c;
    return oop::Complex(re, im);
}

const oop::Complex operator/(const oop::Complex &lhs, const oop::Complex &rhs)
{
    double a = lhs.GetReal(), b = lhs.GetImaginary(), c = rhs.GetReal(),
           d = rhs.GetImaginary(), denom = c * c + d * d,
           re = (a * c + b * d) / denom, im = (b * c - a * d) / denom;
    return oop::Complex(re, im);
}

oop::Complex &oop::Complex::operator=(const oop::Complex &rhs)
{
    re_ = rhs.re_;
    im_ = rhs.im_;
    return *this;
}

oop::Complex &oop::Complex::operator+=(const oop::Complex &rhs)
{
    return (*this = *this + rhs);
}

oop::Complex &oop::Complex::operator-=(const oop::Complex &rhs)
{
    return (*this = *this - rhs);
}

oop::Complex &oop::Complex::operator*=(const oop::Complex &rhs)
{
    return (*this = *this * rhs);
}

oop::Complex &oop::Complex::operator/=(const oop::Complex &rhs)
{
    return (*this = *this / rhs);
}

double oop::Complex::abs() const { return sqrt(re_ * re_ + im_ * im_); }

double oop::Complex::arg() const { return atan2(im_, re_); }

std::ostream &operator<<(std::ostream &s, const oop::Complex &c)
{
    double im = c.GetImaginary();
    return (s << c.GetReal() << (im < 0 ? "" : "+") << im << "i");
}

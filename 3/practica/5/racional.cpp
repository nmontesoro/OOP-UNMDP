#include "racional.h"

CRacional::CRacional()
{
    num_ = 0;
    den_ = 1;
}

CRacional::CRacional(int entero)
{
    num_ = entero;
    den_ = 1;
}

CRacional::CRacional(int num, int den)
{
    num_ = num;
    den_ = den;
}

CRacional &CRacional::operator+=(CRacional &rhs)
{
    int t_num, t_den;
    t_num = this->num_ * rhs.den_ + this->den_ * rhs.num_;
    t_den = this->den_ * rhs.den_;
    this->num_ = t_num;
    this->den_ = t_den;
    return *this;
}

bool CRacional::operator==(CRacional rhs)
{
    return double(*this) == double(rhs);
}

bool CRacional::operator<(CRacional rhs) { return double(*this) < double(rhs); }

bool CRacional::operator>(CRacional rhs) { return double(*this) > double(rhs); }

bool CRacional::operator!(void) { return num_ == 0; }

CRacional CRacional::operator++()
{
    CRacional temp = *this;
    temp.num_ = ++num_;
    return temp;
}

CRacional CRacional::operator++(int dummy)
{
    CRacional temp = *this;
    temp.num_ = num_++;
    return temp;
}

CRacional CRacional::operator--()
{
    CRacional temp = *this;
    temp.num_ = --num_;
    return temp;
}

CRacional CRacional::operator--(int dummy)
{
    CRacional temp = *this;
    temp.num_ = num_--;
    return temp;
}

CRacional &CRacional::operator-()
{
    num_ *= -1;
    return (*this);
}

CRacional::operator double() { return num_ / den_; }

std::ostream &operator<<(std::ostream &s, CRacional &r)
{
    return s << r.num_ << "/" << r.den_;
}

std::istream &operator>>(std::istream &s, CRacional &r)
{
    s >> r.num_ >> r.den_;
    return s;
}

CRacional operator+(CRacional &a, CRacional &b)
{
    return CRacional(a.num_ * b.den_ + a.den_ * b.num_, a.den_ * b.den_);
}

CRacional operator+(double &a, CRacional &b)
{
    return CRacional(int(a) * b.den_ + b.num_, b.den_);
}

CRacional operator+(CRacional &a, double &b) { return b + a; }

CRacional operator-(CRacional &a, CRacional &b)
{
    return CRacional(a.num_ * b.den_ - a.den_ * b.num_, a.den_ * b.den_);
}

CRacional operator-(double &a, CRacional &b)
{
    return CRacional(b.num_ - int(a) * b.den_, b.den_);
}

CRacional operator-(CRacional &a, double &b) { return b - a; }

CRacional operator*(CRacional &a, CRacional &b)
{
    return CRacional(a.num_ * b.num_, a.den_ * b.den_);
}

CRacional operator*(double &a, CRacional &b)
{
    return CRacional(int(a) * b.num_, b.den_);
}

CRacional operator*(CRacional &a, double &b) { return b * a; }

CRacional operator/(CRacional &a, CRacional &b)
{
    return CRacional(a.num_ * b.den_, a.den_ * b.num_);
}

CRacional operator/(double &a, CRacional &b)
{
    return CRacional(int(a) * b.den_, b.num_);
}

CRacional operator/(CRacional &a, double &b)
{
    return CRacional(int(a.num_ / b), a.den_);
}

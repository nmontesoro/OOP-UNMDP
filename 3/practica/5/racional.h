#ifndef LIB_RACIONAL
#define LIB_RACIONAL

#include <iostream>

class CRacional
{
private:
    int num_;
    int den_;

public:
    CRacional(void);
    CRacional(int entero);
    CRacional(int num, int den);

    int GetNum(void);
    int GetDen(void);

    friend std::ostream &operator<<(std::ostream &s, CRacional &r);
    friend std::istream &operator>>(std::istream &s, CRacional &r);
    friend CRacional operator+(CRacional &a, CRacional &b);
    friend CRacional operator+(double &a, CRacional &b);
    friend CRacional operator+(CRacional &a, double &b);
    friend CRacional operator-(CRacional &a, CRacional &b);
    friend CRacional operator-(double &a, CRacional &b);
    friend CRacional operator-(CRacional &a, double &b);
    friend CRacional operator*(CRacional &a, CRacional &b);
    friend CRacional operator*(double &a, CRacional &b);
    friend CRacional operator*(CRacional &a, double &b);
    friend CRacional operator/(CRacional &a, CRacional &b);
    friend CRacional operator/(double &a, CRacional &b);
    friend CRacional operator/(CRacional &a, double &b);
    CRacional &operator+=(CRacional &rhs);
    bool operator==(CRacional rhs);
    bool operator<(CRacional rhs);
    bool operator>(CRacional rhs);
    bool operator!(void);
    CRacional operator++(void);       // prefix
    CRacional operator++(int dummy);  // postfix
    CRacional operator--(void);       // prefix
    CRacional operator--(int dummy);  // postfix
    CRacional &operator-();
    operator double();
};

std::ostream &operator<<(std::ostream &s, CRacional &r);
std::istream &operator>>(std::istream &s, CRacional &r);
CRacional operator+(CRacional &a, CRacional &b);
CRacional operator+(double &a, CRacional &b);
CRacional operator+(CRacional &a, double &b);
CRacional operator-(CRacional &a, CRacional &b);
CRacional operator-(double &a, CRacional &b);
CRacional operator-(CRacional &a, double &b);
CRacional operator*(CRacional &a, CRacional &b);
CRacional operator*(double &a, CRacional &b);
CRacional operator*(CRacional &a, double &b);
CRacional operator/(CRacional &a, CRacional &b);
CRacional operator/(double &a, CRacional &b);
CRacional operator/(CRacional &a, double &b);

#endif

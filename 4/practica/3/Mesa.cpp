#include "Mesa.h"

oop::Mesa::Mesa(const double altura) { Altura_ = altura >= 0 ? altura : 0; }

double oop::Mesa::Alto() const { return Altura_; }

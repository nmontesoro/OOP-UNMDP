#include "Figura.h"

oop::Figura::Figura() { i_ = 15; }

oop::Figura::~Figura() {}

void oop::Figura::SetI(int i) { i_ = i; }

int oop::Figura::GetI() const { return i_; }


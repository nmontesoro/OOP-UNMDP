#include "Empleado.h"

using namespace oop;

Empleado::Empleado() : Person() { hiring_date_ = Fecha(); }

Empleado::Empleado(std::string &first_name, std::string &last_name, Fecha &dob,
                   std::string &address, std::string &dni, Fecha &hiring_date)
    : Person(first_name, last_name, dob, address, dni)
{
    hiring_date_ = hiring_date;
}

Empleado::Empleado(std::string &first_name, std::string &last_name, int day,
                   int month, int year, std::string &address, std::string &dni,
                   int hday, int hmonth, int hyear)
    : Person(first_name, last_name, day, month, year, address, dni)
{
    hiring_date_ = Fecha();
    hiring_date_.setFecha(hday, hmonth, hyear);
}

Fecha Empleado::getHiringDate() { return hiring_date_; }

void Empleado::setHiringDate(Fecha &hiring_date) { hiring_date_ = hiring_date; }

void Empleado::setHiringDate(int day, int month, int year)
{
    hiring_date_.setFecha(day, month, year);
}

std::ostream &oop::operator<<(std::ostream &co, Empleado &emp)
{
    return co << emp.last_name_ << ", " << emp.first_name_ << std::endl
              << "Contratado el: " << emp.hiring_date_ << std::endl
              << "Fecha de nacimiento: " << emp.dob_;
}
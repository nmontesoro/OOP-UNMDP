#include "Person.h"

#include <string>

using namespace std;
using namespace oop;

Person::Person()
{
    name_ = "";
    dob_ = Fecha();
    address_ = "";
    dni_ = "";
}

Person::Person(string &name, Fecha &dob, string &address, string &dni)
{
    name_ = name;
    dob_ = dob;
    address_ = address;
    dni_ = dni;
}

Person::Person(string &name, int day, int month, int year, string &address,
               string &dni)
{
    Fecha dob = Fecha();
    dob.setFecha(day, month, year);

    *this = Person(name, dob, address, dni);
}

string Person::getName() { return name_; }
Fecha Person::getDOB() { return dob_; }
string Person::getAddress() { return address_; }
string Person::getDNI() { return dni_; }

void Person::setName(string &name) { name_ = name; }
void Person::setDOB(Fecha &dob) { dob_ = dob; }
void Person::setAddress(string &address) { address_ = address; }
void Person::setDNI(string &dni) { dni_ = dni; }

void Person::setDOB(int day, int month, int year)
{
    Fecha dob = Fecha();
    dob.setFecha(day, month, year);
    setDOB(dob);
}

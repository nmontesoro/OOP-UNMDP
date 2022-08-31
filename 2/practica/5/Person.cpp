#include "Person.h"

#include <string>

using namespace std;
using namespace oop;

Person::Person()
{
    first_name_ = "";
    last_name_ = "";
    dob_ = Fecha();
    address_ = "";
    dni_ = "";
}

Person::Person(string &first_name, string &last_name, Fecha &dob,
               string &address, string &dni)
{
    first_name_ = first_name;
    last_name_ = last_name;
    dob_ = dob;
    address_ = address;
    dni_ = dni;
}

Person::Person(string &first_name, string &last_name, int day, int month,
               int year, string &address, string &dni)
{
    Fecha dob = Fecha();
    dob.setFecha(day, month, year);

    *this = Person(first_name, last_name, dob, address, dni);
}

string Person::getFirstName() { return first_name_; }
Fecha Person::getDOB() { return dob_; }
string Person::getAddress() { return address_; }
string Person::getDNI() { return dni_; }

void Person::setFirstName(string &first_name) { first_name_ = first_name; }
void Person::setLastName(string &last_name) { last_name_ = last_name; }
void Person::setDOB(Fecha &dob) { dob_ = dob; }
void Person::setAddress(string &address) { address_ = address; }
void Person::setDNI(string &dni) { dni_ = dni; }

void Person::setDOB(int day, int month, int year)
{
    Fecha dob = Fecha();
    dob.setFecha(day, month, year);
    setDOB(dob);
}

ostream &oop::operator<<(ostream &co, Person &per)
{
    return co << per.last_name_ << ", " << per.first_name_;
}

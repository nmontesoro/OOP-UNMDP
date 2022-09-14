#ifndef LIB_PERSONA
#define LIB_PERSONA

#include <iostream>

#include "Fecha.h"

namespace oop
{
    class Persona
    {
    public:
        Persona(const std::string &name = "Pedro",
                const unsigned int &num = 123456789,
                const Fecha &fecha = Fecha());
        ~Persona();

        void SetName(const std::string &nom);
        bool SetDocument(const unsigned int &doc);
        bool SetBirthDate(const Fecha &date);
        bool SetBirthDate(const int dd, const int mm, const int aa);

        std::string GetName() const;
        unsigned int GetDocument() const;
        Fecha GetBirthDate() const;

        friend std::ostream &operator<<(std::ostream &os, Persona &per);

    protected:
        std::string Name_;
        unsigned int Document_;
        Fecha BirthDate_;
    };
}

std::ostream &operator<<(std::ostream &os, oop::Persona &per);

#endif

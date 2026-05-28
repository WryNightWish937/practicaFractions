// ----------------------------------------------------------
// Práctica 1: Clase Fraction
// Fecha: 1 de junio, 2026.
// Autores:
//          A01798798 Ricardo Peña Hernández
//          A01803050 Rodrigo Herrera Ávila
// ----------------------------------------------------------

#ifndef PRACTICA1_CLASEFRACTION_H
#define PRACTICA1_CLASEFRACTION_H
#include <iostream>

class Fraction {

public:
    Fraction(int numerator = 0, int denominator = 1);
    std::string to_string() const;
    Fraction operator + (const Fraction& other) const;
    Fraction operator - ()const;
    Fraction operator - (const Fraction& other) const;
    operator double() const;
    bool operator == (const Fraction& other) const;
    bool operator !=(const Fraction &) const;

private:


    int _numerator = 0;
    int _denominator = 1;
};

std::ostream& operator<<(std::ostream& os, const Fraction& r);

#endif //PRACTICA1_CLASEFRACTION_H
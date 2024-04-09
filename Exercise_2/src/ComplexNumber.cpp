#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

namespace ComplexLibrary {

//definzione del metodo che mi trasforma un numero complesso nel suo coniugato
ComplexNumber ComplexNumber::conjugate()
{
    return ComplexNumber(real, -imag);
}
//definizione dell'operatore di stampa
ostream& operator << (ostream& os, const ComplexNumber &a)
{
    if(a.real!= 0 && a.imag > 0)
        os << a.real << "+" << a.imag << "i";
    else if(a.real!= 0 && a.imag < 0)
        os << a.real << a.imag << "i";
    else if(a.imag == 0)
        os << a.real;
    else if(a.real == 0)
        os << a.imag << "i";
    else
        os << 0;
    return os;
}
//definizione dell'operatore +
ComplexNumber operator+(const ComplexNumber &a1, const ComplexNumber &a2)
{
    double RealPart = a1.real + a2.real;
    double ImagPart = a1.imag + a2.imag;
    ComplexNumber c(RealPart, ImagPart);
    return c;
}
//definizione dell'operatore ==
int operator==(const ComplexNumber &a1, const ComplexNumber &a2)
{
    if(a1.real == a2.real && a1.imag == a2.imag){
        return 1;
    }
    else
        return 0;
}

}

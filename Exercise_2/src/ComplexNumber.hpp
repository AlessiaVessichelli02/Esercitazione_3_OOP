#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>

using namespace std;

namespace ComplexLibrary {
//una classe si crea con la keyword "strucut" seguita dal nome della classe, in questo modo creo un nuovo tipo (che in questo caso si chiama ComplexNumber)
struct ComplexNumber
{
    //definisco la classe andando ad inserire gli attributi
    double real;
    double imag;

    //voglio preservare il costruttore
    ComplexNumber() = default;

    //creo il costruttore
    ComplexNumber(double realPart, double imagPart):
        real(realPart),
        imag(imagPart) //questo costrutto differenzia le inizializzazioni semplici
    {

    }

    //creo un metodo che mi trasformi il numero complesso nel suo coniugato
    ComplexNumber conjugate(); //la definizione di tale metodo si trova in ComplexNumber.cpp

};

//dichiaro tutti gli operatori necessari le cui definizioni si trovano in ComplexNumber.cpp

//dichiaro l'operatore di stampa
ostream& operator<<(ostream& os, const ComplexNumber &a);

//dichiaro operatore +
ComplexNumber operator+(const ComplexNumber &a1, const ComplexNumber &a2);

//dichiaro l'operatore ==
int operator==(const ComplexNumber &a1, const ComplexNumber &a2);

}

#endif

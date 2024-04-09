#include "ComplexNumber.hpp"
#include <iostream>

using namespace ComplexLibrary;
using namespace std;

int main()
{
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    int val4 = 0;

    cout << "Inserisci parte reale del primo numero: " << endl;
    cin >> val1;
    cout << "Inserisci parte immaginaria del primo numero: " << endl;
    cin >> val2;
    ComplexNumber a(val1, val2);

    cout << "Inserisci parte reale del secondo numero: " << endl;
    cin >> val3;
    cout << "Inserisci parte immaginaria del secondo numero: " << endl;
    cin >> val4;
    ComplexNumber b(val3, val4);

    cout << "Numero complesso a: " << a << endl;
    cout << "Numero complesso b: " << b << endl;

    ComplexNumber sum = a + b;
    cout << "Somma: " << sum << endl;

    if((a == b) == 1)
        cout << "I due numeri sono uguali" << endl;
    else
        cout << "I due numeri sono diversi" << endl;

    cout << "Coniugato di a: " << a.conjugate() << endl;
    cout << "Coniugato di b: " << b.conjugate() << endl;
    return 0;
}

#include <iostream>
#include "complex.h"

using std::cout;
using std::endl;

int main()
{
    Complex a(77, 66.3);
    Complex b(a);
    int i = 1;

    cout << i++ << ": (" << a.real() << ',' << a.imag() << ')' << endl; // 1
    cout << i++ << ": " << b << endl;                                   // 2
    cout << i++ << ": " << norm(b) << endl;                             // 3
    cout << i++ << ": " << b.norm() << endl;                            // 4
    cout << i++ << ": " << abs(b) << endl;                              // 5
    cout << i++ << ": " << b.abs() << endl;                             // 6
    cout << i++ << ": " << arg(b) << endl;                              // 7
    cout << i++ << ": " << b.arg() << endl;                             // 8

    a = Complex(12, 33.2);
    cout << i++ << ": " << a << endl;                                   // 9
    cout << i++ << ": " << 1+a << endl;                                 // 10

    cout << i++ << ": " << a++ << endl;                                 // 11
    cout << i++ << ": " << ++a << endl;                                 // 12

    b = a.polar(5.6, 1.8);

    cout << i++ << ": " << a << endl;                                   // 13
    cout << i++ << ": " << b << endl;                                   // 14

    b = polar(6.5, 8.1);
    cout << i++ << ": " << b << endl;                                   // 15

    cout << i++ << ": " << a+b << endl;                                 // 16
    cout << i++ << ": " << a-b << endl;                                 // 17
    cout << i++ << ": " << a*b << endl;                                 // 18
    cout << i++ << ": " << a/b << endl;                                 // 19

    a /= b;
    cout << i++ << ": " << a << endl;                                   // 20
    a /= Complex(4, 3);
    cout << i++ << ": " << a << endl;                                   // 21

    a *= b;
    cout << i++ << ": " << a << endl;                                   // 22
    a *= polar(5.1, 5.1);
    cout << i++ << ": " << a << endl;                                   // 23

    a += b;
    b -= a;
    cout << i++ << ": " << b << endl;                                   // 24

    if (!(a == b))
    cout << i++ << ": " << "OK" << endl;                                // 25
    if (a != b)
    cout << i++ << ": " << "OK" << endl;                                // 26
}

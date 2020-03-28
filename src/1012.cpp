#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double A, B, C;
    const double pi = 3.14159;
    cin >> A >> B >> C;
    cout << setprecision(3) << fixed;
    cout << "TRIANGULO: " << ((A * C) / 2.0) << endl;
    cout << "CIRCULO: " << (pi * C * C) << endl;
    cout << "TRAPEZIO: " << (((A + B) * C) / 2.0) << endl;
    cout << "QUADRADO: " << (B * B) << endl;
    cout << "RETANGULO: " << (A * B) << endl;
}
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    float a, b;
    double c, d;
    cin >> a >> b >> c >> d;
    cout << setprecision(6) << fixed;
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    cout << setprecision(1) << fixed;
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    cout << setprecision(2) << fixed;
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
    cout << setprecision(3) << fixed;
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;
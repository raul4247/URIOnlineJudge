#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define PI 3.14159265358979323
double area1(double a)
{
    return (4.0) * a * a * ((PI - pow(3, 1.5) + 3.0) / 12.0);
}
double area3(double a)
{
    return (-1.0) * ((a * a) / 3.0) * ((2.0 * PI) + pow(3, 1.5) - 12.0);
}
int main()
{
    double a, a1, a2, a3;
    cout << setprecision(3) << fixed;
    while (cin >> a)
    {
        a1 = area1(a);
        a3 = area3(a);
        a2 = (a * a) - a1 - a3;
        cout << a1 << ' ';
        cout << a2 << ' ';
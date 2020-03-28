#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double area(double a, double b, double c)
{
    double sm = 0.5 * (a + b + c);
    return ((4.0 / 3.0) * sqrt(sm * (sm - a) * (sm - b) * (sm - c)));
}
int main()
{
    double a, b, c;
    while (cin >> a >> b >> c)
    {
        double areaTriangulo = area(a, b, c);
        if (std::isnan(areaTriangulo) || areaTriangulo == 0.0)
            cout << "-1.000" << endl;
        else
            cout << setprecision(3) << fixed << area(a, b, c) << endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double area(int h, int c, int l)
{
    double r = sqrt((h * h) + (c * c));
    return (r * l);
}
int main()
{
    int n, h, c, l;
    cout << setprecision(4) << fixed;
    while (cin >> n >> h >> c >> l)
        cout << n * area(h, c, l) / 10000.0 << endl;
    return 0;
}
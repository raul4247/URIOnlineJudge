#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double s = 0.0;
    for (int i = 1, j = 0; i <= 39; i += 2, j++)
        s += i / (pow(2, j));
    cout << setprecision(2) << fixed << s << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string s;
    long n, cont = 0;
    double m = 0.0;
    while (getline(cin, s))
    {
        cin >> n;
        cin.ignore();
        m += n;
        cont++;
    }
    cout << setprecision(1) << fixed << m / (double)cont << endl;
    return 0;
}
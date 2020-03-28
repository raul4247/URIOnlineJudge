#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num, hrs;
    float valor;
    cin >> num >> hrs >> valor;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << setprecision(2) << fixed << (hrs * valor) << endl;
}
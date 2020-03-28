#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;
int main()
{
    int trash, qt1, qt2;
    float valor1, valor2;
    cin >> trash >> qt1 >> valor1;
    cin >> trash >> qt2 >> valor2;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << ((qt1*valor1) + (qt2*valor2)) << endl;
    return 0;
}
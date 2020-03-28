#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;
int main()
{
    string nil;
    double salario, vendas;
    getline (cin, nil);
    cin >> salario >> vendas;
    cout << setprecision(2) << fixed;
    cout << "TOTAL = R$ " << (salario + (0.15 * vendas)) << endl; 
        return 0;
}
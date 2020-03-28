#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, qtd;
    int total = 0, c = 0, r = 0, s = 0;
    char tipo;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> qtd >> tipo;
        total += qtd;
        if (tipo == 'C')
            c += qtd;
        else if (tipo == 'R')
            r += qtd;
        else if (tipo == 'S')
            s += qtd;
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << setprecision(2) << fixed;
    cout << "Percentual de coelhos: " << 100 * c / (float)total << " %" << endl;
    cout << "Percentual de ratos: " << 100 * r / (float)total << " %" << endl;
    cout << "Percentual de sapos: " << 100 * s / (float)total << " %" << endl;
    return 0;
}
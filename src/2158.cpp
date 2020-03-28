#include <iostream>
using namespace std;
int main()
{
    long long fp, fh, cont = 1;
    while (cin >> fp >> fh)
    {
        long long ligacoes, atomos;
        ligacoes = ((5 * fp) + (6 * fh)) / 2;
        atomos = 2 + ligacoes - fp - fh;
        cout << "Molecula #" << cont << ".:." << endl;
        cout << "Possui " << atomos << " atomos e " << ligacoes << " ligacoes" << endl
             << endl;
        cont++;
    }
    return 0;
}
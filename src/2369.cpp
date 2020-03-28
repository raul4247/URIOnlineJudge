#include <iostream>
using namespace std;
int main()
{
    int qtd, total = 0;
    cin >> qtd;
    total += 7;
    if (qtd >= 11 & qtd <= 30)
        total += (qtd - 10);
    else if (qtd > 30)
        total += 20;
    if (qtd >= 31 & qtd <= 100)
        total += (2 * (qtd - 30));
    else if (qtd > 100)
        total += 140;
    if (qtd - 100 > 0)
        total += (5 * (qtd - 100));
    cout << total << endl;
    return 0;
}
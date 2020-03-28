#include <iostream>
using namespace std;
int main()
{
    int v, n, menor, j;
    cin >> n >> v;
    menor = v;
    j = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> v;
        if (v < menor)
        {
            menor = v;
            j = i ;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << j << endl;
    return 0;
}
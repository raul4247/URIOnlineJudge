#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string *nomes;
    int qtd, n;
    cin >> qtd >> n;
    nomes = new string[qtd];
    for(int i = 0; i < qtd; i++)
        cin >> nomes[i];
    sort(nomes, nomes+qtd);
    cout << nomes[n-1] << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int conta_espacos(string s)
{
    int qtd = 1;
    for (int i = 0; i < s.length(); i++)
        if (s.at(i) == ' ')
            qtd++;
    return qtd;
}
int main()
{
    int n, kg = 0;
    float preco = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float valor;
        string frutas;
        cin >> valor;
        cin.ignore();
        getline(cin, frutas);
        int qtd = conta_espacos(frutas);
        kg += qtd;
        preco += valor;
        cout << "day " << i + 1 << ": " << qtd << " kg" << endl;
    }
    cout << setprecision(2) << fixed;
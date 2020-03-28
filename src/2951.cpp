#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, min, total = 0;
    int *pontos;
    string runas;
    char val;
    cin >> n >> min;
    pontos = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val >> pontos[i];
        runas += val;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        total += pontos[runas.find(val)];
    }
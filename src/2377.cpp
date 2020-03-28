#include <iostream>
using namespace std;
int main()
{
  long int tamanho_estrada, distancia, custo_km, custo_pedagio;
  cin >> tamanho_estrada >> distancia >> custo_km >> custo_pedagio;
  cout << ((((tamanho_estrada / distancia) * custo_pedagio)) + (tamanho_estrada * custo_km)) << endl;
  return 0;
}
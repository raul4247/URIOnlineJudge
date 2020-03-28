#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const float NOTAS[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    const int QTD_NOTAS = 6;
    const float MOEDAS[] = {100.00, 50.00, 25.00, 10.00, 5.00 , 1.00};
    const int QTD_MOEDAS = 6;
        double input;
    long notas, moedas;
    cin >> input;
    notas = (int) input;
    moedas = (int) ((input-notas) * 100);
    cout << setprecision(2) << fixed;
    cout << "NOTAS:" << endl;
    for(int i=0;i<QTD_NOTAS;i++){
        cout << (int)(notas / int(NOTAS[i])) << " nota(s) de R$ " << NOTAS[i] << endl;
        notas %= (int)NOTAS[i];
    }   
    cout << "MOEDAS:" << endl;
    moedas += (notas*100);
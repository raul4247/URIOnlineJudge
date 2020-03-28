#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const float NOTAS[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00};
    const int QTD_NOTAS = 7;
        long notas;
    cin >> notas;
    cout << setprecision(2) << fixed;
    cout << notas << endl;
    for(int i=0;i<QTD_NOTAS;i++){
        cout << (int)(notas / int(NOTAS[i])) << " nota(s) de R$ " << (int)NOTAS[i] << ",00" << endl;
        notas %= (int)NOTAS[i];
    }   
    return 0;
}
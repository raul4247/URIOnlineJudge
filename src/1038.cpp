#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const float PRECO[] = {0.0, 4.0, 4.5, 5.0, 2.0, 1.5};
    int id, qtd;
    cin >> id >> qtd;
    cout << "Total: R$ " << setprecision(2) << fixed << (PRECO[id]*qtd) << endl;
    return 0;
}
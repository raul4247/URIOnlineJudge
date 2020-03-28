#include <iostream>
#include <iomanip>
using namespace std;
int duracao(int ini, int fim){
    if(fim-ini < 0)
        return (fim-ini+24)%24;
    return (fim-ini)%24;
}
int main()
{
    int ini, fim;
    cin >> ini >> fim;
    if(fim-ini == 0)
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    else
        cout << "O JOGO DUROU " << duracao(ini, fim) << " HORA(S)" << endl;
    return 0;
}
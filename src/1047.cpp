#include <iostream>
using namespace std;
int main()
{
    int hr_ini, min_ini, hr_fim, min_fim;
    int hr, min;
    cin >> hr_ini >> min_ini >> hr_fim >> min_fim;
    hr = hr_fim - hr_ini;
    min = min_fim - min_ini;
    if (min < 0)
    {
        min += 60;
        hr--;
    }
    if(hr < 0)
        hr+=24;
        if (hr == 0 && min == 0)
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else
        cout << "O JOGO DUROU " << hr << " HORA(S) E " << min << " MINUTO(S)" << endl;
    return 0;
}
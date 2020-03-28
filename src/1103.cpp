#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int hr_ini, hr_fim, min_ini, min_fim, hr, min;
    cin >> hr_ini >> min_ini >> hr_fim >> min_fim;
    do
    {
        hr = hr_fim - hr_ini;
        min = min_fim - min_ini;
        while (min < 0)
        {
            min += 60;
            hr--;
        }
        while (hr < 0)
            hr += 24;
        cout << ((hr * 60) + min) << endl;
        cin >> hr_ini >> min_ini >> hr_fim >> min_fim;
    } while (!(hr_ini == 0 && min_ini == 0 && hr_fim == 0 && min_fim == 0));
    return 0;
}
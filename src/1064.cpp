#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int p = 0;
    float x, media = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        if (x > 0)
        {
            p++;
            media += x;
        }
    }
    cout << p << " valores positivos" << endl;
    cout << setprecision(1) << fixed << (media / (float) p) << endl;
    return 0;
}
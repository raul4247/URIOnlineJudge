#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    do
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            continue;
        else if (x1 == x2 && y1 == y2)
            cout << 0 << endl;
        else if ((x1 == x2 && y1 != y2) || (y1 == y2 && x1 != x2))
            cout << 1 << endl;
        else if (abs(x1 - x2) == abs(y1 - y2) )
            cout << 1 << endl;
        else if(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
            cout << 2 << endl;
    } while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0);
    return 0;
}
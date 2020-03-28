#include <iostream>
#include <math.h>
using namespace std;
float dist(int x1, int y1, int x2, int y2)
{
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
int main()
{
    int r1, x1, y1, r2, x2, y2;
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        if (r1 >= r2+dist(x1,y1,x2,y2))
                cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }
    return 0;
}
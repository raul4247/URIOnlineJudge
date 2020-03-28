#include <iostream>
using namespace std;
int main()
{
    int x, y, tmp;
    cin >> x >> y;
    if (x > y)
    {
        tmp = y;
        y = x;
        x = tmp;
    }
    for (int i = x + 1; i < y; i++)
        if (i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    return 0;
}
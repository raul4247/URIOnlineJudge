#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int s = 0;
    for (int i = y + 1; i < x; i++)
        if (i % 2 != 0)
            s += i;
    cout << s << endl;
    return 0;
}
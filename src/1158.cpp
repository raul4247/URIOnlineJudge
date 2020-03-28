#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y;
        if (x % 2 == 0)
            x++;
        s = 0;
        for (int j = 0; j < y; j++, x += 2)
            s += x;
        cout << s << endl;
    }
    return 0;
}
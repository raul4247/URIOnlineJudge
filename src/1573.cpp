#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;
                if (a == 0 && b == 0 && c == 0)
            break;
        cout << (int)pow((a * b * c), 1 / 3.0) << endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x % 2 == 0)
        x++;
    for (int j = 0; j < 6; j++)
    {
        cout << x << endl;
        x += 2;
    }
    return 0;
}
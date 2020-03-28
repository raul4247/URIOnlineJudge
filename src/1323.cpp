#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int s = 0;
        for (int i = 1; i <= n; i++)
            s += (i * i);
        cout << s << endl;
        cin >> n;
    }
    return 0;
}
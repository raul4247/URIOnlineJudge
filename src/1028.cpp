#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int mdc(int n1, int n2)
{
    int r;
    do
    {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    } while (r != 0);
    return n1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int f1, f2;
        cin >> f1 >> f2;
        cout << mdc(f1, f2) << endl;
    }
    return 0;
}
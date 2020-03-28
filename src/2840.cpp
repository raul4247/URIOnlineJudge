#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int r, l;
    cin >> r >> l;
    cout << (int)(l/((4 / 3.0) * 3.1415 * pow(r, 3))) << endl;
    return 0;
}
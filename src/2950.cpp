#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    cout << setprecision(2) << fixed << (n/ (float)(x+y)) << endl;
    return 0;
}
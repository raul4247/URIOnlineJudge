#include <iostream>
using namespace std;
int main()
{
    float a, g, ra, rg;
    cin >> a >> g >> ra >> rg;
    cout << (ra / a > rg / g ? "A" : "G") << endl;
    return 0;
}
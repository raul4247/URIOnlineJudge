#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t, vel;
    cin >> t >> vel;
    cout << setprecision(3) << fixed << ((t * vel)/12.0) << endl;
    return 0;
}
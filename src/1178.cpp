#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n;
    cin >> n;
    cout << setprecision(4) << fixed;
    for(int i=0;i<100;i++)
    {
        cout << "N[" << i << "] = " << n << endl;
        n/=2.0;
    }
    return 0;
}
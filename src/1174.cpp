#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double v[100];
    for(int i=0;i<100;i++)
        cin >> v[i];
    cout << setprecision(1) << fixed;
    for(int i=0;i<100;i++)
        if(v[i] <=10.0)
            cout << "A[" << i << "] = " << v[i] << endl;
    return 0;
}
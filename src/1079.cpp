#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        float m, v1,v2,v3;
        cin >> v1 >> v2 >> v3;
        cout << setprecision(1) << fixed << (((2*v1)+(3*v2)+(5*v3))/10.0) << endl;
    }
    return 0;
}
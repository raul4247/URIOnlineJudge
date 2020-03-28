#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    cout << setprecision(1) << fixed;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(b == 0)
            cout << "divisao impossivel" << endl;
        else
           cout << (a/(float)b) << endl;
    }
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    float c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        cout << (int)ceil(log2(c)) << " dias" << endl;
    }
    return 0;
}
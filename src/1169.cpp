#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x;
    unsigned long long int s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s = 0;
        for (int j = 0; j < x; j++)
        {
            if (j <= 62)
                s += pow(2, j);
            else
            {
                s /= 12000;
                s += pow(2, j)/12000;
            }
        }
        if (x <= 63)
            cout << s / 12000 << " kg" << endl;
        else
            cout << s+1 << " kg" << endl;
    }
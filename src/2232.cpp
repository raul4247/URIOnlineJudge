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
            s += pow(2, j);
        cout << s << endl;
    }
    return 0;
}
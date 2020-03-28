#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t, menor, pos;
    cin >> t;
    pos = 0;
    menor = t;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (t < menor)
        {
            pos = i;
            menor = t;
        }
    }
    cout << pos + 1 << endl;
    return 0;
}
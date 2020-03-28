#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cont = 1;
    for (int i = 0; i < n; i++)
    {
        cout << cont << ' ' << cont + 1 << ' ' << cont + 2 << " PUM" << endl;
        cont += 4;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        if (a % b == 0)
            cout << "Sao Multiplos" << endl;
        else
            cout << "Nao sao Multiplos" << endl;
    }
    else if (a < b)
    {
        if (b % a == 0)
            cout << "Sao Multiplos" << endl;
        else
            cout << "Nao sao Multiplos" << endl;
    }
    else
        cout << "Sao Multiplos" << endl;
    return 0;
}
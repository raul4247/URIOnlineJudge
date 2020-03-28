#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, rafael, beto, carlos;
        cin >> x >> y;
        rafael = (9 * x * x) + (y * y);
        beto = (2 * x * x) + (25 * y * y);
        carlos = ((-100) * x) + (y * y * y);
        if(rafael > beto && rafael > carlos)
            cout << "Rafael ganhou" << endl;
        else if(beto > rafael && beto > carlos)
            cout << "Beto ganhou" << endl;
        else if(carlos > beto && carlos > rafael)
            cout << "Carlos ganhou" << endl;
    }
    return 0;
}
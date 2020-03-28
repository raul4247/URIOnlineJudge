#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long int val;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val > 0)
        {
            if (val % 2 == 0)
                cout << "EVEN POSITIVE" << endl;
            else
                cout << "ODD POSITIVE" << endl;
        }
        else if (val < 0)
        {
            if ((val * -1) % 2 == 0)
                cout << "EVEN NEGATIVE" << endl;
            else
                cout << "ODD NEGATIVE" << endl;
        }
        else
            cout << "NULL" << endl;
    }
    return 0;
}
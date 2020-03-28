#include <iostream>
using namespace std;
int main()
{
    int n, val;
    int mary, john;
    cin >> n;
    do
    {
        mary = 0;
        john = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            if (val == 0)
                mary++;
            else
                john++;
        }
        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
        cin >> n;
    } while (n != 0);
}
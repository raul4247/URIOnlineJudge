#include <iostream>
using namespace std;
int main()
{
    int n, f1 = 0, f2 = 1, tmp;
    cin >> n;
        for (int i = 0; i < n-1; i++)
    {
        cout << f1 << ' ';
        tmp = f2;
        f2 = f2 + f1;
        f1 = tmp;
    }
    cout << f1 << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        cout << (v % 2 == 0 ? "0" : "1") << endl;
    }
    return 0;
}
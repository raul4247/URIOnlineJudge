#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
        cout << (n == 0 ? "vai ter copa!" : "vai ter duas!") << endl;
    return 0;
}
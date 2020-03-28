#include <iostream>
using namespace std;
int main()
{
    int n;
    long long int f = 1;
    cin >> n;
    for (long long int i = 1; i <= n; i++)
        f *= i;
    cout << f << endl;
    return 0;
}
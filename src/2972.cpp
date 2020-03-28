#include <iostream>
using namespace std;
int main()
{
    unsigned long long int impares = 1, n;
    cin >> n;
    while(n != 0)
    {
        n = n & (n-1);
        impares = impares << 1;
    }
    cout << impares << endl;
    return 0;
}
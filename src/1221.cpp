#include <iostream>
#include <cmath>
using namespace std;
bool prime(unsigned long int n)
{
    for (unsigned long int i = sqrt(n); i >= 2; i--)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        unsigned long int p;
        cin >> p;
        cout << (prime(p) ? "Prime" : "Not Prime") << endl;
    }
    return 0;
}
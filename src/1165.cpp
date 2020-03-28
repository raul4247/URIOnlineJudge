#include <iostream>
#include <cmath>
using namespace std;
bool primo(unsigned long long int n)
{
    if(n == 1)
        return false;
    for(int i=2;i<=((int)sqrt(n));i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        unsigned long long int x;
        cin >> x;
        cout << x << (primo(x) ? " eh primo": " nao eh primo") << endl;
    }
    return 0;
}
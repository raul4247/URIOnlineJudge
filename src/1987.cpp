#include <iostream>
using namespace std;
int main()
{
    int d;
    long long int n;
    while (cin >> d >> n)
    {
        int sum = 0;
        for (int i = 0; i < d; i++)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << ((sum%3) ==0? " sim": " nao")<< endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
long long int calls;
int fib(int n)
{
    int resp;
    if (n == 0)
    {
        resp = 0;
    }
    else if (n == 1)
    {
        resp = 1;
    }
    else
    {
        resp = fib(n - 1) + fib(n - 2);
        calls += 2;
    }
    return resp;
}
int main()
{
    int n, val;
    cin >> n;
    calls = 0;
    while (n != 0)
    {
        cin >> val;
        cout << "fib(" << val << ")"
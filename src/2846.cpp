#include <iostream>
#include <iomanip>
using namespace std;
long int fib(long int n)
{
    long int fib1 = 3, fib2 = 5, cont = 0, fibonot, tmp;
    while (cont != n)
    {
        for (int i = fib1 + 1; i < fib2; i++)
        {
            fibonot = i;
            cont++;
            if (cont == n)
                return fibonot;
        }
        tmp = fib2;
        fib2 = fib1+fib2;
        fib1 = tmp;
    }
    return 0;
}
int main()
{
    long int n;
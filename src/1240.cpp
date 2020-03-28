#include <iostream>
using namespace std;
int contaDigitos(long int n)
{
    if (n == 0)
        return 1;
    int cont = 0;
    while (n != 0)
    {
        cont++;
        n /= 10;
    }
    return cont;
}
bool verifica(long int a, long int b, int digB)
{
    for (int i = 0; i < digB; i++)
    {
        if (a % 10 != b % 10)
            return false;
        a /= 10;
        b /= 10;
    }
    return true;
}
int main()
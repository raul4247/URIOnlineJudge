#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        unsigned long int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        int soma = 0, carry = 0;
        for (int i = 0; i < 9; i++)
        {
            int unidadesA, unidadesB;
            unidadesA = a % 10;
            unidadesB = b % 10;
            soma += unidadesA + unidadesB;
            if (soma >= 10)
            {
                soma /= 10;
                carry++;
            }
            else
                soma = 0;
            a /= 10;
            b /= 10;
        }
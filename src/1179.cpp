#include <iostream>
using namespace std;
int main()
{
    int val, par[5], impar[5], j, k;
    j = k = 0;
    for (int i = 0; i < 15; i++)
    {
        cin >> val;
        if (val % 2 == 0)
        {
            if (j < 5)
            {
                par[j] = val;
                j++;
            }
            else
            {
                for (int c = 0; c < 5; c++)
                    cout << "par[" << c << "] = " << par[c] << endl;
                par[0] = val;
                j = 1;
            }
        }
        else
        {
            if (k < 5)
#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int v, ant, prim, seg;
        int picos = 0;
        bool sub_ant, desc_ant, estavel_ant;
        bool sub, desc, estavel;
        estavel = estavel_ant = true;
        sub = sub_ant = desc_ant = desc = false;
        cin >> ant;
        prim = ant;
        for (int i = 0; i < n - 1; i++)
        {
                        cin >> v;
            if(i==0)
                seg = v;
            sub_ant = sub;
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int botas_esq[31], botas_dir[31];
    int c;
    while (cin >> c)
    {
        memset(botas_esq, 0, sizeof(int) * 31);
        memset(botas_dir, 0, sizeof(int) * 31);
        for (int i = 0; i < c; i++)
        {
            int tam;
            char lado;
            cin >> tam >> lado;
            if (lado == 'D')
                botas_dir[tam - 30]++;
            else if (lado == 'E')
                botas_esq[tam - 30]++;
        }
        int cont = 0, i = 0;
        for (i = 0; i < 31; i++)
        {
            int j = 0;
            while (botas_esq[i] != 0 && botas_dir[i] != 0)
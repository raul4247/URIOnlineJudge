#include <iostream>
#include <cstring>
using namespace std;
bool checarLinha(int *linha)
{
    for (int i = 0; i < 9; i++)
        if (linha[i] != 1)
            return false;
    return true;
}
bool checarColunas(int colunas[9][9])
{   
    int coluna[9] ,bloco1[9],bloco2[9],bloco3[9];
        for(int i=0;i<9;i++)
    {
        memset(coluna, 0, 9*sizeof(int));
        if(i%3 == 0)
        {
            memset(bloco1, 0, 9*sizeof(int));
            memset(bloco2, 0, 9*sizeof(int));
            memset(bloco3, 0, 9*sizeof(int));
        }
        for(int j=0;j<9;j++)
        {
            coluna[colunas[j][i]]++;
            if(coluna[colunas[j][i]] == 2)
                return false;
            if(j>=0 && j<=2)
                bloco1[colunas[j][i]]++;
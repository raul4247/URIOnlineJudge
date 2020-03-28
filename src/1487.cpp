#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void sort_decr(float *ratio, int *tempos, int *pontos, int size)
{
    int maior, tmp;
    float tmpf;
    for (int i = 0; i < size; i++)
    {
        maior = i;
        for (int j = i + 1; j < size; j++)
            if (ratio[j] > ratio[maior])
                maior = j;
        tmpf = ratio[i];
        ratio[i] = ratio[maior];
        ratio[maior] = tmpf;
        tmp = tempos[i];
        tempos[i] = tempos[maior];
        tempos[maior] = tmp;
        tmp = pontos[i];
        pontos[i] = pontos[maior];
        pontos[maior] = tmp;
    }
}
int main()
{
    int num_atracoes, tempo_max, i = 1, max_pontos;
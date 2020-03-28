#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int **m;
    int lin, col;
    cin >> lin >> col;
    m = new int *[lin];
    for (int i = 0; i < lin; i++)
        m[i] = new int[col];
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int val;
            cin >> m[i][j];
        }
    }
    int maior = 0;
    for (int i = 0; i < col; i++)
        maior += m[0][i];
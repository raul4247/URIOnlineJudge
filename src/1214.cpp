#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int c, qtd_turma, *notas, count;
    float media_turma;
    cout << setprecision(3) << fixed;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> qtd_turma;
        notas = new int[qtd_turma];
        media_turma = 0;
        count = 0;
        for (int j = 0; j < qtd_turma; j++)
        {
            cin >> notas[j];
            media_turma += notas[j];
        }
        media_turma /= (float)qtd_turma;
        for (int j = 0; j < qtd_turma; j++)
            if (notas[j] > media_turma)
                count++;
        cout << (100 * count / (float)qtd_turma) << '%' << endl;
    }
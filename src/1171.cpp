#include <iostream>
#include <vector>
using namespace std;
class Valor
{
public:
    int val;
    int qtd;
    Valor(int v)
    {
        val = v;
        qtd = 1;
    }
};
int busca(vector<Valor> valores, int x)
{
    for (int i = 0; i < valores.size(); i++)
        if (valores.at(i).val == x)
            return i;
    return -1;
}
vector<Valor> selectionSort(vector<Valor> valores)
{
    int min;
    for (int i = 0; i < valores.size(); i++)
    {
        min = i;
        for (int j = i + 1; j < valores.size(); j++)
            if (valores.at(j).val < valores.at(min).val)
                min = j;
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int contagem[10000];
    while(true)
    {
        int bilhetes, convidados;
        cin >> bilhetes >> convidados;
        if(bilhetes == 0 && convidados == 0)
            break;
        memset(contagem, 0, 10000 * sizeof(int));
        int penetras = 0;
        for(int i=0;i<convidados;i++)
        {
            int num_bilhete;
            cin >> num_bilhete;
            contagem[num_bilhete]++;
            if(contagem[num_bilhete] == 2)
                penetras++;
        }
        cout << penetras << endl;
    }
    return 0;
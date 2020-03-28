#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float media = 0.0;
    int qtd = 0;
    while (true)
    {
        int idade;
        cin >> idade;
        if (idade < 0)
            break;
        media += idade;
        qtd++;
    }
    cout << setprecision(2) << fixed << media / (float)qtd << endl;
    return 0;
}
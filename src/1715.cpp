#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int jogador = 0;
    for (int i = 0; i < n; i++)
    {
        bool regular = true;
        for (int j = 0; j < m; j++)
        {
            int gols;
            cin >> gols;
            if (gols == 0)
                regular = false;
        }
        if (regular)
            jogador++;
    }
    cout << jogador << endl;
    return 0;
}
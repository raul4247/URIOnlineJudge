#include <iostream>
#include <string>
using namespace std;
void decidePartida(int r, int g, int b)
{
    if (r == g && r == b)
        cout << "trempate" << endl;
    else if ((r == g && r > b) || (g == b && g > r) || ((r == b && r > g)))
        cout << "empate" << endl;
    else if (r > g && r > b)
        cout << "red" << endl;
    else if (g > r && g > b)
        cout << "green" << endl;
    else if (b > g && b > r)
        cout << "blue" << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int gols;
        cin >> gols;
        cin.clear();
        fflush(stdin);
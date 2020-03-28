#include <iostream>
#include <cmath>
using namespace std;
int hp(int l, int b, int iv, int ev)
{
    return (((iv + b + 50 + (sqrt(ev) / 8)) * l) / (50)) + 10;
}
int stats(int l, int b, int iv, int ev)
{
    return (((iv + b + (sqrt(ev) / 8)) * l) / (50)) + 5;
}
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        string nome;
        int l, b, iv, ev;
        cin >> nome >> l;
        cout << "Caso #" << i + 1 << ": " << nome << " nivel " << l << endl;
        cin >> b >> iv >> ev;
        cout << "HP: " << hp(l, b, iv, ev) << endl;
        cin >> b >> iv >> ev;
        cout << "AT: " << stats(l, b, iv, ev) << endl;
        cin >> b >> iv >> ev;
        cout << "DF: " << stats(l, b, iv, ev) << endl;
        cin >> b >> iv >> ev;
#include <iostream>
using namespace std;
void seq(int ini, int fim)
{
    int s = 0;
    for (int i = ini; i <= fim; i++)
    {
        cout << i << ' ';
        s += i;
    }
    cout << "Sum=" << s << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    while (n > 0 && m > 0)
    {
        if (n > m)
            seq(m, n);
        else
            seq(n, m);
        cin >> n >> m;
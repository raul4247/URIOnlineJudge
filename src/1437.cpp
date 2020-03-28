#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    const char POS[] = {'N', 'L', 'S', 'O'};
    cin >> n;
    while (n != 0)
    {
        cin >> s;
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.at(i) == 'D')
                p++;
            else if (s.at(i) == 'E')
                p--;
        }
        while (p < 0)
            p += 4;
        if (p > 3)
            p = p % 4;
        cout << POS[p] << endl;
        cin >> n;
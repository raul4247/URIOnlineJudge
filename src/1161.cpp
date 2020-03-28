#include <iostream>
#include <iomanip>
#include <cstring>
#define MAX 21
using namespace std;
long long int fat(int n)
{
    long long int p = 1;
    for (int i = 1; i <= n; i++)
        p *= i;
    return p;
}
int main()
{
    int m, n;
    long long int fat_cache[MAX];
    long long int m_fat, n_fat;
    memset(fat_cache, 0, MAX * sizeof(*fat_cache));
    while (cin >> m >> n)
    {
        if (fat_cache[m] == 0)
            fat_cache[m] = fat(m);
        if (fat_cache[n] == 0)
            fat_cache[n] = fat(n);
        cout << (fat_cache[m] + fat_cache[n] ) << endl;
    }
        return 0;
}
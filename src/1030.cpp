#include <iostream>
using namespace std;
int josephus(int n, int jump)
{
    if (n == 1)
        return 1;
    else
        return (((josephus(n - 1, jump) + jump - 1) % n) + 1);
}
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int n, jump;
        cin >> n >> jump;
        cout << "Case " << i + 1 << ": " << josephus(n, jump) << endl;
    }
    return 0;
}
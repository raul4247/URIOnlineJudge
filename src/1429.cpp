#include <iostream>
using namespace std;
int main()
{
    const int FATORIAL[] = {1, 1, 2, 6, 24, 120, 720};
    while (true)
    {
        long int n, s;
        cin >> n;
        if (n == 0)
            break;
        s = 0;
        for (int i = 0; i < 5; i++)
        {
            int d = n % 10;
            n /= 10;
            s += (d * FATORIAL[i + 1]);
        }
        cout << s << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, val, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val >= 10 && val <= 20)
            count++;
    }
    cout << count << " in" << endl;
    cout << n - count << " out" << endl;
    return 0;
}
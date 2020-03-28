#include <iostream>
using namespace std;
int main()
{
    int n, t = 0;
    for(int i=0;i<3;i++)
    {
        cin >> n;
        t+=n-1;
    }
    cin >> n;
    t+=n;
    cout << t << endl;
    return 0;
}
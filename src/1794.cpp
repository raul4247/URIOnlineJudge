#include <iostream>
using namespace std;
int main()
{
    short n, l_min, l_max, s_min, s_max;
    cin >> n >> l_min >> l_max >> s_min >> s_max;
    if (n >= l_min && n <= l_max && n >= s_min && n <= s_max)
        cout << "possivel" << endl;
    else
        cout << "impossivel" << endl;
    return 0;
}
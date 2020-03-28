#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    float o, b, i;
    cin >> o >> b >> i;
    if(o==b || o == i || b==i)
        cout << "Empate" << endl;
    else if(i < b && i < o)
        cout << "Ian" << endl;
    else if(o < b && o < i)
        cout << "Otavio" << endl;
    else if(b < o && b < i)
        cout << "Bruno" << endl;
    return 0;
}
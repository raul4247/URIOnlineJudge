#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float i = 0.0, j;
    for (int k = 0; k <= 10; k++, i += 0.2)
    {
        j = 1 + i;
        for (int l = 1; l <= 3; l++, j = l + i)
            cout << "I=" << i << " J=" << j << endl;
    }
    return 0;
}
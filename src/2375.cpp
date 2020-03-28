#include <iostream>
using namespace std;
int main()
{
    double d, a, c, p;
    cin >> d >> a >> c >> p;
    cout << ((d<=a && d<=c && d<=p)? "S":"N") << endl;
    return 0;
}
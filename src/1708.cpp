#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (int)ceil(b / ((float)(b - a))) << endl;
    return 0;
}
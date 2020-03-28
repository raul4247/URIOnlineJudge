#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2, dist;
    cin >> x1 >> y1 >> x2 >> y2;
    dist = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    cout << setprecision(4) << fixed << dist << endl;
    return 0;
}
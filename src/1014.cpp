#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int dist;
    float comb;
    cin >> dist >> comb;
    cout << setprecision(3) << fixed << (dist/comb) << " km/l" << endl;
    return 0;
}
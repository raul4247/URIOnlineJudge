#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int t;
    cin >> t;
        cout << (int)(t/3600) << ":";
    t %= 3600;
    cout << (int)(t/60) << ":";
    t %= 60;
    cout << t << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
        if(b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0)
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int dias;
    cin >> dias;
        cout << (dias/365) << " ano(s)" << endl;
    dias %= 365;
    cout << (dias/30) << " mes(es)" << endl;
    dias %= 30;
    cout << (dias) << " dia(s)" << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    long long int a,b;
    while(cin >> a >> b)
        cout << (a^b) << endl;
    return 0;
}
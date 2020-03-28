#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    int n, i, count = 0;
    for (i = 0; i < 5; i++){
        cin >> n;
        if(n % 2 == 0 )
            count++;
    }
    cout << to_string(count) << " valores pares" << endl;
    return 0;
}
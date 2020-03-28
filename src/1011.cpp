#include <iostream>
#include <iomanip>
#include <math.h> 
using namespace std;
int main(){
    const double pi = 3.14159;
    double v, r;
         cin >> r;
        v = (4.0/3.0) * r * r * r * pi;
    cout << "VOLUME = " << std::fixed << std::setprecision(3) << v << endl;
    return 0;
}
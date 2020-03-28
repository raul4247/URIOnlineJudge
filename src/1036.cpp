#include <iostream>
#include <iomanip>
#include <math.h> 
using namespace std;
int main(){
    float a, b, c, x1, x2, delta;
    cin >> a >> b >> c;
    if(a == 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    delta = (b * b) - (4 * (a * c));
    if(delta < 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    delta = sqrt(delta);
    x1 = (delta - b)/ (2 * a);
    x2 = (-delta - b)/ (2 * a);
    cout << "R1 = " << std::fixed << std::setprecision(5) << x1 << endl;
    cout << "R2 = " << std::fixed << std::setprecision(5) << x2 << endl;
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool existeTriangulo(float a, float b, float c){
    if(a > abs(b-c) && a < (b+c))
        return true;
    return false;
}
int main(){
    float a, b, c;
    cin >> a >> b >> c;
    cout << setprecision(1) << fixed;
    if(existeTriangulo(a, b, c) || existeTriangulo(a, c, b) || existeTriangulo(b, a, c) || existeTriangulo          
        cout << "Perimetro = " << (a+b+c)<< endl;
    else
        cout << "Area = " << (a+b)*c/2.0 << endl;
    return 0;
}
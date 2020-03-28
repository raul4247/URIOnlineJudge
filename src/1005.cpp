#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b, media;
    cin >> a >> b;
    media = ((3.5*a) + (7.5*b))/(11.0);
    cout << "MEDIA = " << setprecision(5) << fixed << media << endl;
}
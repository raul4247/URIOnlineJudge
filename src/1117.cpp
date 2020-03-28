#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int cont = 0;
    float nota, media=0;
    while(cont!=2)
    {
        cin >> nota;
        if(nota >= 0.0 && nota<=10.0){
            cont++;
            media+=nota;
        }
        else
            cout << "nota invalida" << endl;
    }
        cout << setprecision(2) << fixed << "media = " << media/2.0 << endl;
    return 0;
}
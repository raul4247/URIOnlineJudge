#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int cont = 0;
    float num;
    for(int i=0; i<6;i++){
        cin >> num;
        if(num > 0)
            cont++;
    }
    cout << cont << " valores positivos" << endl;
    return 0;
}
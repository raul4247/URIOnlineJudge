#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m2=0,m3=0,m4=0,m5=0;
    float total=0.0;
    cin >> n;
        for(int i=0;i<n;i++)
    {
        int cod, qtd;
        cin >> cod >> qtd;
        if(cod == 1001)
            total +=(1.5*qtd);
                    else if(cod == 1002)
            total +=(2.5*qtd);
        else if(cod == 1003)
            total +=(3.5*qtd);
        else if(cod == 1004)
            total +=(4.5*qtd);
        else if(cod == 1005)
            total +=(5.5*qtd);
    }
    cout << setprecision(2) << fixed << total << endl;
    return 0;
}
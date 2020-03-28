#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a = 0, g = 0, d = 0, input;
    cin >> input;
    while (input != 4)
    {
        if(input==1)
            a++;
        else if(input==2)
            g++;
        if(input==3)
            d++;
        cin >> input;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
        return 0;
}
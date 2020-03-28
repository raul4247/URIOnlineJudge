#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int n, a, b, pontos_a, pontos_b;
    cin >> n;
    while (n != 0)
    {
        pontos_a = 0;
        pontos_b = 0;
        for(int i=0;i<n;i++){
            cin >> a >> b;
            if(a > b)
            pontos_a++;
            else if(a < b)
            pontos_b++;
        }
        cout << pontos_a << ' ' << pontos_b << endl;
        cin >> n;
    }
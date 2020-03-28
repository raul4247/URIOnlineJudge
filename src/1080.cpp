#include <iostream>
using namespace std;
int main()
{
    int val, maior, j;
    cin >> val;
    maior = val;
    j = 0;
    for (int i = 1; i < 100; i++)
    {
        cin >> val;
        if(val >= maior){
            maior = val;
            j = i;
        }
    }
    cout << maior << endl;
    cout << j+1 << endl;
    return 0;
}
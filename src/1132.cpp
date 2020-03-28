#include <iostream>
#include <algorithm>
using namespace std;
int mult(int ini, int fim){
    int s =0;
    for(int i=ini;i<=fim;i++)
        if(i%13!=0)
            s+=i;
    return s;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if(a>b)
        cout << mult(b,a) << endl;
    else
        cout << mult(a,b) << endl;
    return 0;
}
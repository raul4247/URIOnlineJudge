#include <iostream>
using namespace std;
int main()
{
    int v[20];
        for(int i=0;i<20;i++)
        cin >> v[i];
    for(int i=0,j=19;i<20;i++,j--)
        cout << "N[" << i << "] = " << v[j] << endl;
    return 0;
}
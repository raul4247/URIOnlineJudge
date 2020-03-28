#include <iostream>
using namespace std;
int main()
{
    int lim, j=0;
    cin >> lim;
    for(int i=0;i<1000;i++)
    {
        cout << "N[" << i << "] = " << j << endl;
        j++;
        if(j==lim)
            j=0;
    }
    return 0;
}
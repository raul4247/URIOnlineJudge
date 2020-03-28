#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int i=1;
    while(i<=y)
    {
        for(int j=0;j<x-1 && i<=y;j++,i++)
            cout << i << ' ';
        if(i<=y)
           cout << i << endl;
        i++;
    }
    return 0;
}
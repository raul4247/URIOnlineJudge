#include <iostream>
using namespace std;
int impares(int ini, int x){
    int s=0;
    for(int i=ini+1;i<x;i++)
        if(i%2==1)
            s+=i;
    return s;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x > y)
            cout << impares(y,x) << endl; 
        else
            cout << impares(x, y) << endl; 
    }
    return 0;
}
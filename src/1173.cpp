#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<10;i++,n*=2)
        cout << "N[" << i << "] = " << n << endl;
    return 0;
}
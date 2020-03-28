#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned long long int fib[61], f1, f2, tmp;
    int t, n;
    f1=0;
    f2=1;
    for(int i=0; i<61;i++){
        fib[i] = f1;
        tmp = f2;
        f2 = f2 + f1;
        f1 = tmp;
    }
    cin >> t;
    for(int i=0; i<t;i++)
    {
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    unsigned long long int n;
    cin >> n;
    cout << (((n*(n-1))/2) + ((n*(n-1)*(n-2)*(n-3))/24))+ 1 << endl;
    return 0;
}
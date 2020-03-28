#include <iostream>
using namespace std;
int main()
{
    int n, op, aproval=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {   
        cin >> op;
        if(op == 0)
            aproval++;
    }
    cout << (aproval >= ((n/2)+1) ? "Y" : "N") << endl;
    return 0;
}
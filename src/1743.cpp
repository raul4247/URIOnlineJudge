#include <iostream>
using namespace std;
int main()
{
    int plug[5];
    for(int i=0;i<5;i++)
        cin >> plug[i];
        bool result = true;
    for(int i=0;i<5;i++)
    {
        int val;
        cin >> val;
        if(val == plug[i])
        {
            result = false;
            break;
        }
    }
    cout << (result ? "Y":"N") << endl;
    return 0;
}
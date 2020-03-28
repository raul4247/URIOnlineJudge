#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<39;i++)
        cout << '-';   
    cout << endl;
    for(int i=0;i<5;i++)
    {
        cout << '|';
        for(int j=0;j<37;j++)
            cout << ' ';
        cout << '|' << endl;
    }
    for(int i=0;i<39;i++)
        cout << '-';   
    cout << endl;
    return 0;
}
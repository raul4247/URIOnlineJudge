#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int t, *tiros;
        cin >> t;
        tiros = new int[t];
        for(int j=0;j<t;j++)
            cin >> tiros[j];
        int hit =0;
        for(int j=0;j<t;j++)
        {
            char c;
            cin >> c;
            if(c == 'S' && (tiros[j] == 1 || tiros[j] == 2))
                hit++;
            else if (c == 'J'  && tiros[j] > 2 )
                hit++;
        }
        cout << hit << endl;
    }
    return 0;
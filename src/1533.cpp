#include <iostream>
#include <vector>
using namespace std;
int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        int m1, m2;
        int i1, i2;
                cin >> m1 >> m2;
        if(m2 > m1)
        {
            int tmp;
            tmp = m2;
            m2 = m1;
            m1 = tmp;
            i1=1;
            i2=0;
        }
        else
        {
            i1=0;
            i2=1;
        }
                for(int i=2;i<n;i++)
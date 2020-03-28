#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int qt, num;
        cin >> qt >> num;
        int prox, prox_index;
        cin >> prox;
        prox_index = 0;
        for(int j=1;j<qt;j++)
        {
            int val;
            cin >> val;
            if(abs(num-val) < abs(num-prox))
            {
                prox = val;
                prox_index = j;
            }
        }
        cout << (prox_index+1) << endl;
    }
    return 0;
}
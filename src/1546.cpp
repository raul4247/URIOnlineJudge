#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        for(int j=0;j<c;j++)
        {
            int f;
            cin >>f ;
            if(f ==1)
                cout << "Rolien" << endl;
            else if(f == 2)
                cout << "Naej" << endl;
            else if(f == 3)
                cout << "Elehcim" << endl;
            else if(f == 4)
                cout << "Odranoel" << endl;
                    }
    }
    return 0;
}
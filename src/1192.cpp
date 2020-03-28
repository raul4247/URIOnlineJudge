#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char str[3];
        for(int j=0;j<3;j++)
            cin >> str[j];
        if(str[0] == str[2])
            cout << (int)((str[0]-48)*(str[0]-48)) << endl;
        else if(isupper(str[1]))
            cout << (int)((str[2]-48)-(str[0]-48)) << endl;
        else if(islower(str[1]))
            cout << (int)((str[2]-48)+(str[0]-48)) << endl;
    }
    return 0;
}
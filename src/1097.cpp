#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int j=7, ini =7;
    for(int i=1;i<=9;i+=2){
        for(;j>=ini-2;j--)
            cout << "I=" << i << " J=" << j << endl;
        ini+=2;
        j=ini;
    }
    return 0;
}
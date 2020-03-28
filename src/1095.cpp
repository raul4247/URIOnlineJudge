#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int i=1;
    for(int j=60;j>=0;j-=5, i+=3)
        cout << "I=" << i << " J=" << j << endl;
    return 0;
}
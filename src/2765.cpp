#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s.substr(0, s.find(',')) << endl;
    cout << s.substr(s.find(',')+1, s.length()) << endl;
    return 0;
}
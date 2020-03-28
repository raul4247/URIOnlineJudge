#include <iostream>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
    string s, s_low;
    string zelda = "zelda";
    locale loc;
        cin >> s;
        for (string::size_type i=0; i<s.length(); i++)
        s_low += tolower(s[i],loc);    
    if (s_low.find(zelda) != string::npos)
        cout << "Link Bolado" << endl;
    else
        cout << "Link Tranquilo" << endl;
    return 0;
}
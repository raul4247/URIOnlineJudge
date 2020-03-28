#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
string rem(string s)
{
    if (s.length() == 0)
        return "0";
    while (s.at(0) == '0')
    {
        if (s.length() == 1)
            return s;
        else
            s.erase(s.begin());
    }
    return s;
}
int main()
{
    string d, num;
    cin >> d >> num;
    while (d.compare("0") != 0 && num.compare("0") != 0)
    {
        num.erase(remove(num.begin(), num.end(), d.at(0)), num.end());
        cout << rem(num) << endl;
        cin >> d >> num;
    }
    return 0;
}
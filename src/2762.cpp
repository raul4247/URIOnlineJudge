#include <iostream>
using namespace std;
int main()
{
    string s, dec = "";
    cin >> s;
    bool start = false;
    for (int i = s.find('.') + 1; i < s.length(); i++)
    {
        if (s.at(i) != '0')
            start = true;
        if (start)
            dec += s.at(i);
    }
    cout << dec << '.' << s.substr(0, s.find('.')) << endl;
    return 0;
}
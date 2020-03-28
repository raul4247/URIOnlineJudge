#include <iostream>
using namespace std;
int main()
{
    string s = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    cin >> n;
    for (int i = 0; i < n && i < s.length(); i++)
        cout << s.at(i);
    cout << endl;
    return 0;
}
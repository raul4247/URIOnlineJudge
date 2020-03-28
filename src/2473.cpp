#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int>nums, sena;
    for(int i = 0; i < 6; i++)
    {
        int val;
        cin >> val;
        nums.push_back(val);
    }
    for(int i = 0; i < 6; i++)
    {
        int val;
        cin >> val;
        sena.push_back(val);
    }
    int acertos = 0;
    for(int i=0; i < 6; i++)
        if(find(sena.begin(), sena.end(), nums.at(i)) != sena.end())
            acertos++;
    if(acertos == 6)
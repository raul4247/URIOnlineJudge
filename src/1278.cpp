#include <iostream>
#include <string>
using namespace std;
/*
    Remove espaços anteriores e posteriores da linha, e deixa apenas um espaço entre as palavras;
*/
string removeSpaces(string line)
{
    while (line[0] == ' ')
        line.erase(0, 1);
    while (line[line.length() - 1] == ' ')
        line.pop_back();
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            i++;
            while (line[i] == ' ')
                line.erase(i, 1);
        }
    }
    return line;
}
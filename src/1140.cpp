#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string line;
    char first;
    bool blank, check;
    while (getline(cin, line))
    {
        if (!line.compare("*"))
            break;
        first = tolower(line.at(0));
        check = true;
        blank = false;
        for (int i = 0; i < line.length(); i++)
        {
            if (line.at(i) != ' ' && blank == false)
            {
                if (tolower(line.at(i)) != first)
                    check = false;
                blank = true;
            }
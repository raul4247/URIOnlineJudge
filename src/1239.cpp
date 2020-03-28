#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    bool openItalicTag = true, openBoldTag = true;
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str.at(i) == '_')
            {
                if (openItalicTag)
                    str.replace(i, 1, "<i>");
                else
                    str.replace(i, 1, "</i>");
                i += 2;
                openItalicTag = !openItalicTag;
            }
            else if (str.at(i) == '*')
            {
                if (openBoldTag)
                    str.replace(i, 1, "<b>");
                else
                    str.replace(i, 1, "</b>");
                i += 2;
                openBoldTag = !openBoldTag;
            }
        }
        openBoldTag = true;
        openItalicTag = true;
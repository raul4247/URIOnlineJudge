#include <iostream>
#include <string>
using namespace std;
int main()
{
  string qwerty = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  string linha;
  while (getline(cin, linha))
  {
    string novaLinha = "";
    for (int i = 0; i < linha.length(); i++)
    {
      if (linha[i] == ' ')
        novaLinha += ' ';
      else
        novaLinha += qwerty[(qwerty.find(linha[i])) - 1];
    }
    cout << novaLinha << endl;
  }
  return 0;
}
#include <iostream>
#include <string>
using namespace std;
int POS_GLOBAL = 0;
void posfixo(string infixo, string PREFIXO)
{
    int pos_raiz;
    string sub_esq, sub_dir;
    if (POS_GLOBAL != PREFIXO.length() && infixo.length() != 0){
        pos_raiz = infixo.find(PREFIXO[POS_GLOBAL]);
        sub_esq = infixo.substr(0, pos_raiz);
        sub_dir = infixo.substr(pos_raiz + 1, infixo.length() - 1);
        POS_GLOBAL++;
        posfixo(sub_esq, PREFIXO);
        posfixo(sub_dir, PREFIXO);
        cout << infixo[pos_raiz];
    }
}
int main()
{
    string prefixo, infixo;
    string sub_esq, sub_dir;
    int pos_raiz;
       while ( cin >> prefixo >> infixo ){
        pos_raiz = infixo.find(prefixo[0]);
        sub_esq = infixo.substr(0, pos_raiz);
#include <iostream>
using namespace std;
int main()
{
    int q, d, p, pag;
    while (true)
    {
        cin >> q;
        if (q == 0)
            break;
        cin >> d >> p;
        pag = (q*d*p)/(p-q);
        cout << pag << (pag != 1 ? " paginas" : " pagina") << endl;
    }
    return 0;
}
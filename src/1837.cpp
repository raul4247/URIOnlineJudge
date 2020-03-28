#include <iostream>
using namespace std;
int main()
{
    int a, b, q, r;
    cin >> a >> b;
    q = a/b;
    r = a-(b*q);
    while(r<0){
        if(b<0){
            r-=b;
            q++;
        }
        else{
            r+=b;
            q--;
        }
    }
    cout << q << ' ' << r << endl;
    return 0;
}
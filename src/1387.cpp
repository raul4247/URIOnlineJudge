#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int r, l;
    cin >> r >> l;
    while(r!=0 && l!=0){
        cout << (r+l) << endl; 
        cin >> r >> l;
    }
    return 0;
}
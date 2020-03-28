#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const string meses[] = {"January", "February", "March", "April", "May", "June", "July", "August",    
    int mes;
    cin >> mes;
    cout << meses[mes-1] << endl;
    return 0;
}
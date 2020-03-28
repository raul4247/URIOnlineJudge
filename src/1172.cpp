#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++){
        int n;
        cin >> n;
        cout << "X[" << i << "] = " << (n > 0 ? n : 1) << endl; 
    }
    return 0;
}
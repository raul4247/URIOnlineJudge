#include <iostream>
using namespace std;
int main()
{
    const int TOPS[] = {0, 1, 3, 5, 10, 25, 50 , 100};
    int n;
    cin >> n;
    int i=0;
    while(!(n >=TOPS[i] && n<=TOPS[i+1]))
        i++;
    cout << "Top " << TOPS[i+1] << endl;
    return 0;
}
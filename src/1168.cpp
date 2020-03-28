#include <iostream>
using namespace std;
int main()
{
    const int LEDS[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n, sum, val;
    string input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        sum = 0;
        for (int j = 0; j < input.length(); j++){
            val = input[j] - '0';
            sum += LEDS[val];
        }
        cout << sum << " leds" << endl;
    }
}
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  while (true)
  {
    string inputNumber;
    cin >> inputNumber;
    if (inputNumber.compare("-1") == 0)
      break;
    int n = stoi(inputNumber, nullptr, 0);
    if (inputNumber.at(0) == '0' && inputNumber.at(1) == 'x')
      cout << dec << n << endl;
    else
      cout << hex << "0x" << uppercase << n << endl;
  }
  return 0;
}
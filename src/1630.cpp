#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long x, y;
  while (cin >> x >> y)
  {
    long long mdc = __gcd(x, y);
    cout << ((x + x + y + y) / (mdc)) << endl;
  }
  return 0;
}
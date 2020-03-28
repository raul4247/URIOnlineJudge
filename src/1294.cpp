#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double min(double a, double b)
{
  if (a < b)
    return a;
  return b;
}
double dydx(double w, double l)
{
  double b = (-4.0) * (w + l);
  return (((-b) - sqrt((b * b) - (48.0 * w * l))) / (24.0));
}
int main()
{
  double w, l;
  cout << fixed << setprecision(3);
  while (cin >> l >> w)
    cout << dydx(l, w) << " " << 0.0 << " " << min(w, l) * 0.5 << endl;
  return 0;
}
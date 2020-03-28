#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  double sides[3];
  cin >> sides[0] >> sides[1] >> sides[2];
  sort(sides, sides + 3, greater<int>());
  if (sides[0] >= (sides[1] + sides[2]))
    cout << "NAO FORMA TRIANGULO" << endl;
  else
  {
    if ((sides[0] * sides[0]) == ((sides[1] * sides[1]) + (sides[2] * sides[2])))
      cout << "TRIANGULO RETANGULO" << endl;
    if ((sides[0] * sides[0]) > ((sides[1] * sides[1]) + (sides[2] * sides[2])))
      cout << "TRIANGULO OBTUSANGULO" << endl;
    if ((sides[0] * sides[0]) < ((sides[1] * sides[1]) + (sides[2] * sides[2])))
      cout << "TRIANGULO ACUTANGULO" << endl;
    if (sides[0] == sides[1] && sides[1] == sides[2])
      cout << "TRIANGULO EQUILATERO" << endl;
    if ((sides[0] == sides[1] && sides[0] != sides[2] && sides[1] != sides[2]) || (sides[0] == sides                    
      cout << "TRIANGULO ISOSCELES" << endl;
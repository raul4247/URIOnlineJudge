#include <bits/stdc++.h>
using namespace std;
const int FIB_LAST_DIGITS[1500] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987                                                                                                                                                                                                                                                                                                                          
/* 
  Para fazer um mod com n�mero muito grande, usa-se a propriedade:
  (x * y) mod a == ((x mod a) * y) mod a
  A sequ�ncia de fibonacci � per�odica para qualquer modulo m, e o per�odo (mod m) � chamado de Pisano period -> pi(m)
  Como pi(10) = 60, os �ltimos d�gitos de Fib(n) se repetem com per�odo 60.
  pi(100) = 300 -> 2 �ltimos d�gitos
  pi(1000) = 1500 -> 3 �ltimos d�gitos
  Os 3 �ltimos d�gitos dos 1500 primeiros n�meros da sequ�ncia de fibonacci est�o em "cache" na constante FIB_LAST_DIGITS.
  Como o problema se resume em achar os �ltimos 3 d�gitos de Fib(n), basta aplicar  n mod 1500, e encontrar o valor na cache.
  Refer�ncias: 
  https://oeis.org/A096363
  https://mathworld.wolfram.com/PisanoPeriod.html
  https://oeis.org/A000045/b000045.txt
*/
int mod(string n, int x)
{
  int answ = 0;
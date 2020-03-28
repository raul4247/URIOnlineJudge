#include <bits/stdc++.h>
using namespace std;
const int FIB_LAST_DIGITS[1500] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987                                                                                                                                                                                                                                                                                                                          
/* 
  Para fazer um mod com número muito grande, usa-se a propriedade:
  (x * y) mod a == ((x mod a) * y) mod a
  A sequência de fibonacci é períodica para qualquer modulo m, e o período (mod m) é chamado de Pisano period -> pi(m)
  Como pi(10) = 60, os últimos dígitos de Fib(n) se repetem com período 60.
  pi(100) = 300 -> 2 últimos dígitos
  pi(1000) = 1500 -> 3 últimos dígitos
  Os 3 últimos dígitos dos 1500 primeiros números da sequência de fibonacci estão em "cache" na constante FIB_LAST_DIGITS.
  Como o problema se resume em achar os últimos 3 dígitos de Fib(n), basta aplicar  n mod 1500, e encontrar o valor na cache.
  Referências: 
  https://oeis.org/A096363
  https://mathworld.wolfram.com/PisanoPeriod.html
  https://oeis.org/A000045/b000045.txt
*/
int mod(string n, int x)
{
  int answ = 0;
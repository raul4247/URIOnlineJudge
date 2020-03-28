#include <iostream>
#include <cstring>
using namespace std;
bool todosOsProblemasForamResolvidosPeloMenosUmaVez(int *problemas, int n)
{
  for (int i = 0; i < n; i++)
    if (problemas[i] == 0)
      return false;
  return true;
}
bool nenhumProblemaFoiResolvidoPorTodos(int *problemas, int n, int pessoas)
{
  for (int i = 0; i < n; i++)
    if (problemas[i] == pessoas)
      return false;
  return true;
}
bool todosResolveramAoMenosUmProblema(int *pessoas, int n)
{
  for (int i = 0; i < n; i++)
    if (pessoas[i] == 0)
      return false;
  return true;
}
int main()
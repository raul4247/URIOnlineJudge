#include <bits/stdc++.h>
using namespace std;
vector<vector<pair<int, int>>> listaAdj;
int *minDist;
bool *minSet;
int minVertice(int n)
{
  int minVal = INT_MAX, minIndex;
  for (int i = 0; i < n; i++)
    if (minSet[i] == false && minDist[i] <= minVal)
      minVal = minDist[i], minIndex = i;
  return minIndex;
}
void dijkstra(int src, int n)
{
  minDist[src] = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int v = minVertice(n);
    minSet[v] = true;
    for (int j = 0; j < listaAdj[v].size(); j++)
    {
      int verticeAdj = listaAdj[v][j].first;
      int peso = listaAdj[v][j].second;
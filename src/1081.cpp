#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;
vector<vector<int>> list_adj;
vector<int> visited;
void printPath(int nivel, int v1, int v2, bool visited)
{
    for (int i = 0; i < (2 * nivel); i++)
        cout << ' ';
    cout << v1 << '-' << v2;
    if (!visited)
        cout << " pathR(G," << v2 << ')';
    cout << endl;
}
void DFS(int n, int nivel)
{
    visited[n] = GRAY;
    for (int i = 0; i < list_adj[n].size(); i++)
    {
        if (visited[list_adj[n][i]] != WHITE)
        {
            printPath(nivel, n, list_adj[n][i] , true);
        }
        else if (visited[list_adj[n][i]] == WHITE)
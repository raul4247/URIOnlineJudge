#include <iostream>
#include <vector>
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;
vector<vector<int>> list_adj;
vector<int> visited;
bool ciclo;
void DFS(int n)
{
    visited[n] = GRAY;
    if (ciclo)
        return;
    for (int i = 0; i < list_adj[n].size(); i++)
    {
        if (visited[list_adj[n][i]] == GRAY)
        {
            ciclo = true;
            return;
        }
        else if (visited[list_adj[n][i]] == WHITE)
            DFS(list_adj[n][i]);
    }
    visited[n] = BLACK;
}
int main()
{
    int n;
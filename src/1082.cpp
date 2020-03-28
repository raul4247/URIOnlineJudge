#include <iostream>
#include <cstring>
using namespace std;
class Graph
{
private:
    int v_num;
    int **matrix;
    void DFS(int v, bool *visited, bool * v_components)
    {
        visited[v] = true;
        v_components[v] = true;
        for (int i = 0; i < v_num; i++)
            if (matrix[i][v] == 1 && !visited[i])
                DFS(i, visited, v_components);
    }
public:
    Graph(int n)
    {
        v_num = n;
        matrix = new int *[v_num];
        for (int i = 0; i < v_num; i++)
        {
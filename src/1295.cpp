#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <iomanip>
using namespace std;
double decideMenor(double a, double b)
{
    if (a < b)
        return a;
    return b;
}
double distPontos(pair<double, double> p1, pair<double, double> p2)
{
    return sqrt(((p1.first - p2.first) * (p1.first - p2.first)) + ((p1.second - p2.second) * (p1.second  
}
double menorDist(vector<pair<double, double>> pontos, int n)
{
    double menor = 10000;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dist = distPontos(pontos[i], pontos[j]);
            menor = decideMenor(menor, dist);
        }
    }
    return menor;
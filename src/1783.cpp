#include <iostream>
#include <iomanip>
using namespace std;
double pontoMedio(double p1, double p2)
{
    return ((p1 + p2) / 2.0);
}
double coeficienteAngular(pair<double, double> p1, pair<double, double> p2)
{
    return ((p1.second - p2.second) / ((double)(p1.first - p2.first)));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pair<double, double> ponto_A_antigo, ponto_A_novo;
        pair<double, double> ponto_B_antigo, ponto_B_novo;
        cin >> ponto_A_antigo.first >> ponto_A_antigo.second;
        cin >> ponto_B_antigo.first >> ponto_B_antigo.second;
        cin >> ponto_A_novo.first >> ponto_A_novo.second;
        cin >> ponto_B_novo.first >> ponto_B_novo.second;
        double coef_angular_A, coef_linear_A;
        double coef_angular_B, coef_linear_B;
      
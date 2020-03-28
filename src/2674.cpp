#include <iostream>
#include <cmath> 
using namespace std;
bool isPrime(long n)
{
    if(n==1)
        return false;
    for(long i=2;i<((int)sqrt(n))+1;i++)
        if(n % i == 0)
            return false;
    return true;
}
int num_digs(long n){
    int cont = 0;
    while(n!=0){
        n/=10;
        cont++;
    }
    return cont;
}
int main()
{
    long n;
    bool super = false;
        while(cin >> n){
        if(isPrime(n)){
            super = true;
            int d = num_digs(n);
            for(int i=0;i<d;i++){
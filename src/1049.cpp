#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string t1, t2, t3;
    cin >> t1 >> t2 >> t3;
        if(t1.compare("vertebrado") == 0){
        if(t2.compare("ave") == 0){
            if(t3.compare("carnivoro") == 0)
                cout << "aguia" << endl;
            else if(t3.compare("onivoro") == 0)
                cout << "pomba" << endl;
        }
        else if(t2.compare("mamifero") == 0){
            if(t3.compare("onivoro") == 0)
                cout << "homem" << endl;
            else if(t3.compare("herbivoro") == 0)
                cout << "vaca" << endl;
        }
    }
    else if(t1.compare("invertebrado") == 0){
        if(t2.compare("inseto") == 0){
            if(t3.compare("hematofago") == 0)
                cout << "pulga" << endl;
            else if(t3.compare("herbivoro") == 0)
                cout << "lagarta" << endl;
        }
        else if(t2.compare("anelideo") == 0){
            if(t3.compare("hematofago") == 0)
                cout << "sanguessuga" << endl;
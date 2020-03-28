    #include <iostream>
    #include <iomanip>
    using namespace std;
    int main()
    {
        float n1, n2, n3, n4;
        float media, nota;
        cin >> n1 >> n2 >> n3 >> n4;
        media = ((2 * n1) + (3 * n2) + (4 * n3) + n4) / 10.0;
        cout << setprecision(1) << fixed;
        cout << "Media: " << media << endl;
        if(media >= 7.0)
            cout << "Aluno aprovado." << endl;
        else if(media >= 5.0 && media <= 6.9){
            cout << "Aluno em exame." << endl;
            cin >> nota;
            cout << "Nota do exame: " << nota << endl;
            media = (media+nota)/2.0;
            if(media >= 5.0)
                cout << "Aluno aprovado." << endl;
            else
                cout << "Aluno reprovado." << endl;   
            cout << "Media final: " << media << endl;     
        }
        else
            cout << "Aluno reprovado." << endl;
        return 0;
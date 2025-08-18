#include <iostream>
using namespace std;

int main () {
    //declaracao de variaveis
    int ano;
    
    //entrada de dados
    cout << "Digite um ano e descubra se ele eh bissexto: " << endl;
    cin >> ano;
    
    // processamento e saida de dados
    if (ano % 4 == 0 && ano % 100 != 0) 
        cout << "O ano eh bissexto." << endl;
        else 
            if (ano % 400 == 0)
                cout << "O ano eh bissexto." << endl; 
                else 
                cout << "O ano nao eh bissexto."<< endl;
    
    return 0;
    }
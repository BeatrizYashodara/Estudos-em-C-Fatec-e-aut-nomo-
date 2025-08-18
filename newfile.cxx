#include <iostream>
using namespace std;

int main () {
    // declaracao de variaveis 
    int idade;
    
    // entrada de dados 
    cout <<"Por favor, informe a sua idade: " << endl;
    cin >> idade;
    
    // processamento e saida de dados 
    if (idade>=0 && idade<12)
        cout << " Sua idade eh " << idade << " anos. Voce eh considerado/a uma crianca" << endl;
        else 
            if (idade > 11 && idade <= 17)
                 cout << " Sua idade eh " << idade << " anos. Voce eh considerado/a  um/a  adolescente" << endl;
            else 
                if (idade > 17 && idade <= 49)
                     cout << " Sua idade eh " << idade << " anos. Voce eh considerado/a  um/a  adulto/a" << endl;
                     else 
                      cout << " Sua idade eh " << idade << " anos. Voce eh considerado/a  um/a  idoso/a." << endl;
                      
    return 0;
}
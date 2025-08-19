#include <iostream> 
using namespace std;

int main () {
    // declaracao de variaveis
    int a1;
    int a2;
    int a3;
    
    // entrada de dados 
    cout << " Descobrindo o tipo do triangulo: escaleno, isosceles ou equilatero." << endl;
    
    cout << "Informe o angulo 1 do triangulo: " << endl;
    cin >> a1; 
    cout << "Informe o angulo 2 do triangulo: " << endl;
    cin >> a2; 
    cout << "Informe o angulo 3 do triangulo: " << endl;
    cin >> a3; 
    
    //processamento e saida de dados
    if (a1 + a2 + a3 != 180)
    cout << "Nao eh um triangulo." << endl;
        else 
            if (a1 == a2 && a2 == a3)
            cout <<"Esse triangulo eh equilatero." << endl;
                else
                if (a1 == a2 || a2 == a3) 
                cout << "Esse triangulo eh isosceles. " << endl;
                else 
                    if (a1 == a3)
                    cout << "Esse triangulo eh isosceles." << endl;
                        else 
                        cout << "Esse triangulo eh escaleno." <<endl; 
    
    return 0;
}

#include <iostream>
using namespace std;

int main () {
    
    // declaracao de variaveis
    float base;
    float alt;
    float area;
    
    // apresentacao do programa
    cout << "Calculador de areas - 2: Triangulos" << endl; 
    
    // entrada de dados
    cout << "Por favor, informe o tamanho da base do seu triangulo: " << endl; 
    cin >> base;
    cout << "Por favor, informe o tamanho da altura do seu triangulo: " << endl; 
    cin >> alt;
    
    // operacao armazenada em variavel
    area = (base * alt) /2;
    
    cout << "A area do seu triangulo eh: " << area << " . Obrigada por usar nossa aplicacao!" << endl;
    
    return 0;
}
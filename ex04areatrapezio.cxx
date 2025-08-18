#include <iostream>
using namespace std;

int main () {
    // declaracao de variaveis
    float bBase; //base maior
    float base; // base menor
    float alt; //altura
    
    //entrada de dados
    cout << "Informe a base maior do trapezio: " << endl; 
    cin >> bBase;
     cout << "Informe a base menor do trapezio: " << endl; 
    cin >> base;
     cout << "Informe a altura do trapezio: " << endl; 
    cin >> alt;
    
    //processamento de dados
    float area = ( (bBase + base)* alt) /2;
    
    //saida de dados
    cout <<"A area do trapezio eh: " << area << ". " << endl; 
      
    return 0;
}
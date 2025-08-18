#include <iostream>
using namespace std;

int main () {
    
    float lar;
    float alt;
    float area;
    
    cout << "Calculador de area: retangulo" << endl;
    cout << "Por favor, informe a largura: " << endl;
    cin >> lar;
    cout << "Por favor, informe a altura: " << endl;
    cin >> alt;
    
    area = lar * alt;
    
    cout << "A area do seu retangulo eh: " << area << endl;
    
    return 0;
    }
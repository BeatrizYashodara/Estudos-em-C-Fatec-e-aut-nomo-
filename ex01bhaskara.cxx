#include <iostream>
#include <cmath>
using namespace std;

int main () {
    
    // variaveis a, b e c
    int a;
    int b;
    int c; 
    
    //entrada do usuario
    cout << "por favor, informe o valor de a:" << endl;
    cin >> a; 
    cout << "informe o valor de b: " << endl;
    cin >> b;
    cout << "informe o valor de c: " << endl;
    cin >> c; 
     
    // formula de bhaskara
    int delta = (b*b) - (4*a*c);
    
   // cout << "O valor de delta eh: " << delta << endl; 
   int x1 = ((-b) - sqrt(delta)) / (2*a);
   int x2 = ((-b) + sqrt (delta)) / (2*a);
   int x = (-b) / (2*a);
   
    // tratamento de excecoes
    
    if (delta < 0) 
        cout << "Delta menor que zero. Nao existem raizes reais. " << endl;
     else  
                if (delta == 0)
                   cout << "Delta igual a zero. Apenas uma raiz real. Raiz: " << x << endl;
         else 
            cout << "Delta maior que zero. Raizes X': " << x1 << " e X'': " << x2 << " ." << endl;
             
    
    
   return 0;
}
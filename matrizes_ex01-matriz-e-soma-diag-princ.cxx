/*
1 - Popule uma matriz de ordem 10; 
    exiba a soma da diagonal principal. 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz_o10[10][10], soma, elementos [10], q; 
        soma = 0;
        q = 0;
    
    cout<<"Popule uma matriz de ordem 10" << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << "Populando a " << i + 1 << "a linha: " << endl;
        for (int j = 0; j < 10; j++) {
            cout << j + 1 << "a coluna: " << endl;
            cin >> matriz_o10 [i] [j]; 
            
            if (i == j) 
            soma += matriz_o10 [i] [j];
            elementos [i] = matriz_o10 [i] [j];
            q += 1;
        }
    }
    
    
    cout << "A soma da diagonal principal eh: " << soma << endl;

    return 0;
}

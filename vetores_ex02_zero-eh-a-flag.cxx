/*
2 - Fazer um programa que digite 
vários números no vetor de tamanho máximo de 100 elementos,
até digitar o número "0".
Imprimir quantos números iguais ao último número foram lidos.
O limite de números é 100.
Sem considerar o "0" como último número.
*/

#include <iostream>
using namespace std; 

int main()
{

float numeros [100];
int q = 0; 
int n_iguais = 0;
int c = 0;

cout << "Digite ate 100 numeros, mas quando digitar zero, a contagem irá ser interrompida." << endl;


// até 100 elementos;
// zero é o número de saída do laço;
// zero não é o último elemento da sequência;
// imprimir quantas vezes o último elemento se repetiu dentro da sequência (varrer o vetor comparando).

while (q < 100){
    cout << "Digite um numero: " << endl; 
    cin >> numeros [c];
    if (numeros[c] != 0) {
        c += 1; // q eh o tamanho real do vetor
        q += 1 ; 
    }
    else 
        q = 100; // se digitar 0, ele sai do laço
}
    int u = c - 1;
    cout << "o ultimo numero eh: " << numeros [u] << endl; 
for (int i = 0; i < c; i++) { // é apenas uma verificacao, se algum é igual ao ultimo termo!
    
    if (numeros [u] == numeros [i])
    n_iguais += 1;
  
}
    cout << "iguais ao ultimo numero foram computados " << n_iguais << " numeros iguais. "<< endl;

    return 0;
}

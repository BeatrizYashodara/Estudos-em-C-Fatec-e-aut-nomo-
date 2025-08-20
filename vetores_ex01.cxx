/* 
Fazer um programa que leia vários números inteiros e positivos. 
A leitura se encerra quando encontrar um número negativo ou quando o vetor fica completo. 
Sabe-se que o vetor possui, no máximo, 10 elementos. 
Gerar e imprimir um vetor onde cada elemento é o inverso do correspondente do vetor original
*/
#include <iostream>
using namespace std; 

int main()
{
//F11 salva o código
int vetorNumeros [10];
int vetorInverso [10];
int q = 0;
int i;

for ( i=0; i < 10; i++){
    cout << "Insira um numero inteiro para compor a " << i+1 << "a posicao do vetor: "<< endl;
    cin >> vetorNumeros [i];
    q += 1;
    vetorInverso[i] = ( vetorNumeros[i] * (-1) );
    
    if (vetorNumeros [i] < 0 ){
        i = 10;
    }
}

for ( i=0; i < q; i++) {
    if (i < (q-1) )
        cout << i + 1 << "a posicao: " << vetorInverso[i] << ";" << endl;
    else
        cout << i + 1 << "a posicao: " << vetorInverso[i] << "." << endl;

}
    return 0;
}


#include <iostream> 
using namespace std;

int main (){
    // declaracao de variaveis
    int n;
    
    // entrada de dados
    cout << "Por favor, insira um valor inteiro: " << endl;
    cin >> n;
    
    // processamento e saida de dados
    if (n % 2 == 0)
        cout << n << " eh par." << endl;
    else 
        cout << n << " eh impar." << endl;
        
    return 0;
}
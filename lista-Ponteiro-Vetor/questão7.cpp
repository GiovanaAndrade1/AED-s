//Escreva um algoritmo em C que armazene em um vetor os 100 primeiros números ímpares. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream> 
using namespace std;

int main (){
    int impar[100];
    int numero = 1;

    for (int i = 0 ; i < 100 ; i ++){
        impar[i] = numero;
        numero = numero + 2;
    }

    for (int i = 0 ; i < 100 ; i ++){
        cout << impar[i] << endl;
    }
    
return 0;
}
//Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do teclado, armazena os números no vetor e imprime o vetor na ordem inversa.

#include <iostream> 
using namespace std;


int ArmazenaNumeros(int *vetor){
    for (int i = 0 ; i < 5; i++){
        cout << "Informe o " << i + 1 << " º número: ";
        cin >> vetor[i];
    }

    
    return 0;
}

int imprimeNumeros(int *vetor){
    cout <<" A ordem inversa dos vetores seriam: ";
    for (int i = 4 ; i >= 0 ; i--){
        cout<< vetor[i]<< ",";
    }

    return 0;

}


int main (){
    int *vetor = new int[5];
    ArmazenaNumeros(vetor);
    imprimeNumeros(vetor);

    return 0;
}
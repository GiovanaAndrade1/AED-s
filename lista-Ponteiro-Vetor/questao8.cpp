//Escreva um algoritmo em C que receba dez números do usuário e armazene em um vetor a metade de cada número. Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <iostream> 
using namespace std;


int ArmazeneValores(int *vetor){
    for (int i = 0 ; i < 10 ; i ++){
        cout << "Informe o valor " << i + 1 << ": ";
        cin >> vetor[i]; 
    }
    return 0;
}

int ArmazeneMetadeValores(int *vetor, int *NovoVetor){
    for (int i = 0 ; i < 10 ; i ++){
        NovoVetor[i] = vetor[i] / 2;
    }
    return 0;
}

int ImprimeValores(int *vetor, int *NovoVetor){
    for (int i = 0 ; i < 10 ; i ++){
        cout << " Valor " << i + 1 << ": " << NovoVetor[i] << endl;;
    }
return 0;
}


int main() {
    int *vetor = new int [10];
    int *NovoVetor = new int[10];
    ArmazeneValores(vetor);
    ArmazeneMetadeValores(vetor , NovoVetor);
    ImprimeValores(vetor, NovoVetor);
    return 0;
}
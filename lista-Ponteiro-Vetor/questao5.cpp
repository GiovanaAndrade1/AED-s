//Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido mais um número qualquer e verificar se esse número existe no vetor ou não.
// Se existir, o algoritmo deve gerar um novo vetor sem esse número.

#include <iostream>
using namespace std;

int ArmazenaNumeros(int *vetor){
    for(int i = 0; i < 5 ; i++){
    cout <<" Insira o valor do "<< i + 1 << "º elemento: " << endl;
    cin >> vetor[i];
    }



return 0;
}

int VerificaLista(int *vetor){
    int num = 0;

    cout << "Informe um numero qualquer"<< endl;
    cin >> num;

    bool encontrado = false;

    for (int i = 0; i < 5 ; i++){

        if (num == vetor[i]){
            vetor[i] = vetor[i]- num;
            cout << vetor[i] << ", ";
            encontrado = true;
            int *novoVetor = new int[5];
            int j = 0;

    for (int i = 0; i < 5; i++) {
        if (vetor[i] != num) {
            novoVetor[j] = vetor[i];
            j++;
        }
    }

    cout << "Novo vetor sem o número " << num << ": ";
    for (int i = 0; i < j; i++) {
        cout << novoVetor[i] << " ";
    }
    cout << endl;

            break;
        }

    }
    if (!encontrado) {
        cout << " o numero não existe na lista"<< endl;
        return 0;
    }
    return 0;
   
    
}



int main(){

    int *vetor = new int[5];
    ArmazenaNumeros(vetor);
    VerificaLista(vetor);
    return 0;
}
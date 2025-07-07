//Escreva um algoritmo em C que receba quinze números do usuário e armazene em um vetor a raiz quadrada de cada número.
 //Caso o valor digitado seja menor que zero o número -1 deve ser atribuído ao elemento do vetor. Após isso, o algoritmo deve imprimir todos os valores armazenados


#include <iostream> 
# include <math.h> 
using namespace std;

int ArmazeneValores(int *vetor){
    for ( int i = 0 ; i < 15 ; i ++){
        cout<< " Digite o valor " << i + 1 << " : ";
        cin >> vetor[i];

    }
return 0;
}

int CalculaValores(int *vetor, int *NovoVetor){
    for (int  i = 0 ; i < 15 ; i ++){
        if (vetor[i] < 0 ) {
            NovoVetor[i] = -1; 
        } else {
            NovoVetor[i] = sqrt(vetor[i]);
        }
    }
    return 0;
}

int ImprimeValores(int *NovoVetor){
    cout << " Os novos valores da raiz quadrada são: ";
    for (int i =0 ; i < 15 ; i ++){
        cout << NovoVetor[i] << " ,";

    }

    return 0;
}



int main(){
    int *vetor = new int[15];
    int *NovoVetor = new int[15];
    ArmazeneValores(vetor);
    CalculaValores(vetor, NovoVetor);
    ImprimeValores( NovoVetor );
    return 0; 
}
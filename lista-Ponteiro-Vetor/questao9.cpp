//Escreva um algoritmo em C que receba dez números do usuário e armazene em um vetor o cubo de cada número. Após isso, o algoritmo deve imprimir todos os valores armazenados.

# include <iostream> 
# include <math.h>
using namespace std;

int ArmazenaValores(int *vetor){
    for (int i = 0 ; i < 10 ; i++){
       cout<< " Digite o valor " << i+1 << " : ";
       cin >> vetor[i];
    }
return 0;
}

int CalculaCubo(int *vetor, int *NovoVetor){
    for (int i = 0 ; i < 10 ; i++){
        NovoVetor[i] = pow(vetor[i], 3);
    }
    return 0;
}

int ImprimeValores(int *NovoVetor){
    cout << " O novo valor armazenado no vetor é: ";
    for (int i = 0 ; i < 10 ; i++){
        cout << NovoVetor[i] << ",";
        
    }
    return 0;
}

    


int main(){
    int *vetor = new int[10];
    int *NovoVetor = new int [10];
    ArmazenaValores(vetor);
    CalculaCubo(vetor, NovoVetor);
    ImprimeValores(NovoVetor);

    return 0; 
}
//Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.

#include <iostream>
using namespace std;


int ArmazenaNumeros(int *vetor){
    int valor = 0;
    int i = 0;
        while ( i < 20){
            cout<< "Informe o" << i + 1 << " Valor"<< endl;
            cin >> valor;

            if ( valor > 0 ){
                vetor[i] = valor;
                i++;
            }
            else {
                cout << "O valor deve ser positivo" << endl;
            }
  
        }
        return 0;
    }
    


int MaiorNumero(int *vetor){
    int posicao = vetor[0];
    int maior = vetor[0];
    for (int i = 1 ; i < 20 ; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
    }
    
    }
    cout<< " O maior valor do vetor é: "<< maior << " E sua posição é "<< posicao ;
return 0; 
}




int main(){
    int *vetor = new int[20];
    ArmazenaNumeros(vetor);
    MaiorNumero(vetor);

    return 0;

}
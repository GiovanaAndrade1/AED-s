/* Escreva um algoritmo em C++ que leia um vetor com 100 elementos representando as respostas de uma pesquisa de opinião 
(cada elemento deve conter um valor de 1 a 5, representando uma nota de satisfação). O algoritmo deve calcular e imprimir:

1. A quantidade de respostas para cada nota de satisfação (1 a 5).
2. A média de satisfação geral.
3. A nota de satisfação mais comum (moda) e a quantidade de vezes que ela foi registrada.*/

#include <iostream> 
using namespace std;

int leituraDados(int *satisfacao){
    int satis = 0;
    for( int i = 0 ; i < 5 ; i ++){
        cout << " Infome o valor da" << i + 1 <<  "de satifacao"<< endl;
    cin >> satis;
    while (satis > 5 || satis < 1 ){
        cout << " Infome somente valores de 1 a 5"<< endl;
        cin >> satis;
    }
    satisfacao[i]= satis;
    }
    return 0;
}
    int MediaSatis(int *satisfacao){
        int soma = 0 ; 
        int resultado = 0;
        for (int i = 0 ; i < 5 ; i ++){
            soma = soma + satisfacao[i];
            resultado = soma/5;
        }
        cout << " A media de satifação geral é"<< resultado << endl; 

        return 0;
        }

    int ModaSatis(int *satisfacao, int *moda){

        for (int i = 0; i < 5; i++) {
        int frequencia = satisfacao[i];
        moda[frequencia]++;
        }
        int maior = moda[0];

        for ( int i = 0 ; i < 5 ; i ++){
            if (moda[i] > maior){
                maior = moda[i];
            }
        }
        cout << " A satisfação que aparece mais vezes  é " << maior << endl;
        return 0;
            
        }



int main (){
    int *satisfacao = new int[5];
    int *moda = new int[6];
    leituraDados(satisfacao);
    MediaSatis(satisfacao);
    ModaSatis(satisfacao, moda);


    return 0;
}
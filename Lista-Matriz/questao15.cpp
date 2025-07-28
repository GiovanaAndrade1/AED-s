/*Faça um algoritmo em C que dado um vetor preenchido com N valores, seu programa deve solicitar ao usuário informar um novo número. Seu programa deve verificar se este número está presente em no vetor inicial. 
Caso este número esteja presente, seu programa deve informar em qual ou quais posições este número se encontra. Assim, você deve criar um novo vetor para armazenar essas posições e retornar para o usuário.*/

# include <iostream>
using namespace std;
int cont = 0;


int Preenchervalores(int *vetor, int num){
    for (int i = 0 ; i < num ; i ++){
        cout << " Informe o " << i + 1 << "Numero" << endl;
        cin >> vetor[i];

    }
    return 0;
}

int VerificaNumero(int *vetor, int num, int *vetorPo){
  
    int N = 0;
    cout << " informe um numero qualquer" << endl;
    cin >> N;
    for (int i = 0 ; i < 40 ; i ++){
        if (vetor[i] == N){
            vetorPo[cont] = i;
            cont++;

        }
    }
return 0;
}

int VerificaCondicao(int *vetorPo){
    if (cont == 0){
        cout<< " numero não encontrado"<< endl;
    }
    else{
        cout << "Numero encontrado nas posicoes: "<< endl;
        for (int i = 0 ; i < cont ; i ++){
            cout << vetorPo[i] <<"," ;
        }
    }
return 0;
}

int main() {
    int num = 0;

    cout <<" Informe o tamanho do vetor" << endl;
    cin >> num;
    int *vetor = new int [num];
    int *vetorPo = new int [40];
    Preenchervalores(vetor, num);
    VerificaNumero(vetor, num, vetorPo);
    VerificaCondicao(vetorPo);

    return 0;
}
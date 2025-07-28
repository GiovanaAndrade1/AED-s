/*Faça uma função que verifique se uma matriz é uma matriz identidade. 
Uma matriz identidade é uma matriz quadrada em que todos os elementos da diagonal principal são iguais a 1 e os demais elementos 
são iguais a 0.*/

#include <iostream>
using namespace std;

int PreencherMatriz(int **matriz, int linhas, int colunas){
        cout << " informe os numeros da matriz "<< endl;
    for (int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c ++){
            cout << "matriz [" << l << "] [ " << c << "]: ";
            cin >> matriz[l][c];
        }
    }
    return 0;
}
int VerificaIdentidade(int **matriz, int linhas, int colunas){
    bool identidade = true; 

    cout << "\nVerificando se é matriz identidade..." << endl;

    for (int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c++ ){
            if (l == c){
                if (matriz[l][c] != 1){ 
                    identidade = false;
                }
            } else {
                if (matriz[l][c] != 0){ 
                    identidade = false;
                }
            }
        }
    }

    if (identidade){
        cout << "É matriz identidade!" << endl;
    } else {
        cout << "Não é matriz identidade!" << endl;
    }

    return 0;
}

int main(){
    int **matriz;
    int linhas , colunas, resultado;

    cout << " Informe a quantidade de linhas da matriz" << endl;
    cin >> linhas;
    cout <<" Informe a quantidade de colunas das matriz" << endl;
    cin >> colunas;
    matriz = new int* [linhas]; 
    for (int i = 0 ; i < colunas ; i ++){
        matriz[i] = new int[colunas];
    }
    PreencherMatriz(matriz, linhas, colunas);
    VerificaIdentidade(matriz, linhas, colunas);
    return 0;
}
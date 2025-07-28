/*Faça uma função que receba uma matriz de números inteiros e retorne a quantidade de elementos que estão acima da diagonal principal 
da matriz. A diagonal principal é definida pelos elementos onde a linha é igual à coluna.*/

#include <iostream>
using namespace std;


int PreencherMatriz(int **matriz, int linhas){
        cout << " informe os numeros da matriz "<< endl;
    for (int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < linhas ; c ++){
            cout << "matriz [" << l << "] [ " << c << "]: ";
            cin >> matriz[l][c];
        }
    }
    return 0;
}
int retornar(int **matriz, int linhas, int colunas){
    int somatorio = 0; 
    int cont = linhas;
    for (int i = 0 ; i < linhas ; i ++){
        somatorio = matriz[i][i] + cont-1
        cont--;
    }

        }
    }
}
int main(){
    int **matriz;
    int linhas;
    cout << " Informe a quantidade de linhas e colunas da matriz quadratica" << endl;
    cin >> linhas;
    matriz = new int* [linhas]; 
    for (int i = 0 ; i < linhas ; i ++){
        matriz[i] = new int[linhas];
    }
    PreencherMatriz(matriz, linhas);
    return 0;
}
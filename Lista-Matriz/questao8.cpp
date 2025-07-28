/* Faça uma função que receba uma matriz de qualquer dimensão e retorne a matriz transposta.*/

#include <iostream>
using namespace std;

int ReceberDados(int **matriz, int linhas, int colunas){
    for (int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c ++){
            cout <<  " matriz [" << l << "] [" << c << "]:";
            cin >> matriz[l][c];
        }
    }
    cout << " Matriz montada"<< endl;
    for (int l = 0 ; l < linhas ; l++){
    for (int c = 0 ; c < colunas ; c ++){
        cout << matriz[l][c] << "\t";
        
    }
    cout << endl;

}
return 0;
}

int transposta(int **matriz, int linhas, int colunas){
    cout << " Matriz tranposta"<< endl;
    for (int c = 0 ; c < colunas ; c++){
        for (int l = 0 ; l < linhas ; l++){
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }
    return 0;
}

int main(){
    int **matriz;
    int colunas, linhas;
    cout << " Informe o numero de linhas"<< endl;
    cin >> linhas;
    cout << " Informe o numero de colunas"<< endl; 
    cin >> colunas;
    matriz = new int*[linhas]; 
    for (int i = 0 ; i < colunas ; i ++){
        matriz[i] = new int[colunas];
    }
    ReceberDados(matriz, linhas, colunas);
    transposta(matriz, linhas, colunas);
        return 0;
}
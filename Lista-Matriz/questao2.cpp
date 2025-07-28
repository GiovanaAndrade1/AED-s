/* Faça uma função que imprima uma matriz de números floats. Sua matriz deve estar no parâmetro desta função.
 Faça sua impressão o mais semelhante com o formato matemático. Para ficar com tabulação correta, use o “\t”. Exemplo de saída:*/
#include <iostream>
using namespace std; 

int PreencherMatriz(float **matriz, int linhas, int colunas){

    cout << " Informe os numeros dentro da matriz"<< endl;

    for (int l = 0; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c ++){
            cout << " Matriz [" << l << "] [" << c << "] : " ;
            cin >> matriz[l][c];
        }
    }

    for (int l = 0 ; l < linhas ; l++){
        for(int c = 0 ; c < colunas ; c ++){
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }

    return 0;
}

int main(){
    float **matriz; 
    int colunas, linhas;
    cout << "Informe o numero de linhas"<< endl;
    cin >> linhas;
    cout << " Informe o numero de colunas"<< endl;
    cin >> colunas;

    matriz = new float*[linhas];
    for (int i = 0; i < linhas; i++) {
        matriz[i] = new float[colunas];
    }
    PreencherMatriz(matriz, linhas, colunas);
    return 0;
}
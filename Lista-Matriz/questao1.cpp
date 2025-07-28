/* Faça uma função que preencha uma matriz de números floats. Sua matriz deve estar no parâmetro desta função.*/
#include <iostream>
using namespace std;

int PreencherMatriz(float **matriz, int linhas, int colunas) {
    cout << "Informe os dados da matriz" << endl;
    
    // Preenchendo a matriz
    for (int l = 0; l < linhas; l++) {
        for (int c = 0; c < colunas; c++) {
            cout << "Matriz [" << l << "][" << c << "]: ";
            cin >> matriz[l][c];
        }
    }

    // Mostrando a matriz
    cout << "\nMatriz preenchida:\n";
    for (int l = 0; l < linhas; l++) {
        for (int c = 0; c < colunas; c++) {
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }

    return 0;
}

int main() {
    float **matriz;
    int linhas, colunas;

    cout << "Informe o numero de linhas: ";
    cin >> linhas;

    cout << "Informe o numero de colunas: ";
    cin >> colunas;

    // Alocando a matriz dinamicamente
    matriz = new float*[linhas];
    for (int i = 0; i < linhas; i++) {
        matriz[i] = new float[colunas];
    }

    // Chamando a função
    PreencherMatriz(matriz, linhas, colunas);

    return 0;
}

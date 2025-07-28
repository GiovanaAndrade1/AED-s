#include <iostream>
#include <cmath> // para pow
using namespace std;

// Função para criar uma submatriz (menor complementar)
float** CriarSubmatriz(float** matriz, int tamanho, int linhaExcluir, int colunaExcluir) {
    float** submatriz = new float*[tamanho - 1];
    for (int i = 0; i < tamanho - 1; i++) {
        submatriz[i] = new float[tamanho - 1];
    }

    int linhaSub = 0;
    for (int i = 0; i < tamanho; i++) {
        if (i == linhaExcluir) continue;

        int colunaSub = 0;
        for (int j = 0; j < tamanho; j++) {
            if (j == colunaExcluir) continue;
            submatriz[linhaSub][colunaSub] = matriz[i][j];
            colunaSub++;
        }
        linhaSub++;
    }

    return submatriz;
}

// Função para liberar memória da matriz
void LiberarMatriz(float** matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

// Função recursiva para calcular determinante
float Determinante(float** matriz, int tamanho) {
    if (tamanho == 2) {
        return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    }

    float det = 0;

    for (int col = 0; col < tamanho; col++) {
        float** submatriz = CriarSubmatriz(matriz, tamanho, 0, col);
        float cofator = pow(-1, col) * matriz[0][col] * Determinante(submatriz, tamanho - 1);
        det += cofator;
        LiberarMatriz(submatriz, tamanho - 1);
    }

    return det;
}

int main() {
    int tamanho;

    cout << "Informe o tamanho da matriz quadrada: ";
    cin >> tamanho;

    // Alocando a matriz
    float** matriz = new float*[tamanho];
    for (int i = 0; i < tamanho; i++) {
        matriz[i] = new float[tamanho];
    }

    // Lendo os dados
    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calculando e exibindo determinante
    float det = Determinante(matriz, tamanho);
    cout << "\nDeterminante da matriz: " << det << endl;

    // Liberando memória principal
    LiberarMatriz(matriz, tamanho);

    return 0;
}

/* Faça uma função que calcule o determinante de uma matriz 2x2;*/
#include <iostream> 
using namespace std; 


int PreencherMatriz(int **matriz){
    cout << " Informe os numeros dentro da matriz"<< endl; 

    for (int l = 0 ; l < 2 ; l ++){
        for (int c = 0 ; c < 2 ; c++){
            cout << " Matriz [ " << l << "] [ " << c << "]: ";
            cin >> matriz[l][c];
        }
    }

    return 0;
}

int determinante(int **matriz){
    int diagonalP = 1;
    int  diagonalS = 1;
    for ( int i = 0 ; i < 2 ; i ++){
        diagonalP *= matriz[i][i];
        diagonalS *= matriz[i][1 - i];
    
    }
    return diagonalP - diagonalS;

}
    

int main(){
    int **matriz;  
    matriz = new int*[2];
    for (int i = 0 ; i < 2 ; i ++){
        matriz[i] = new int[i];
    }
    PreencherMatriz(matriz);
    int det = determinante(matriz);

    cout << "O determinante da matriz 2x2 é: " << det << endl;

    return 0;
}
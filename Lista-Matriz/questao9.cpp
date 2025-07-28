/*Faça uma função que receba duas matrizes de mesma dimensão e retorne a soma das duas matrizes.
 As matrizes devem ser passadas como parâmetros para a função.*/

 #include <iostream> 
 using namespace std;


 int PreencherMatriz(int **matrizA, int **matrizB, int linhas, int colunas){

    cout << " informe os numeros da matriz A "<< endl;
    for (int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c ++){
            cout << "matriz [" << l << "] [ " << c << "]: ";
            cin >> matrizA[l][c];
        }
    }

     cout << " informe os numeros da matriz B "<< endl;
    for (int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c ++){
            cout << "matriz [" << l << "] [ " << c << "]: ";
            cin >> matrizB[l][c];
        }
    }
    return 0;
 }

 int Soma(int **matrizA, int **matrizB, int linhas, int colunas  ){
    int somador = 0;
    for(int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c ++){
            somador = somador + matrizA[l][c] + matrizB[l][c];
        }
    }
    return somador;
 }

 int main(){
    int **matrizA; 
    int **matrizB;
    int linhas , colunas, resultado;

    cout << " Informe a quantidade de linhas das duas matrizes" << endl;
    cin >> linhas;
    cout <<" Informe a quantidade de colunas das duas matrizes" << endl;
    cin >> colunas;
    matrizA = new int* [linhas]; 
    for (int i = 0 ; i < colunas ; i ++){
        matrizA[i] = new int[colunas];
    }
    matrizB = new int* [linhas]; 
    for (int i = 0 ; i < colunas ; i ++){
        matrizB[i] = new int[colunas];
    }

    PreencherMatriz(matrizA, matrizB, linhas, colunas);
    resultado = Soma(matrizA, matrizB, linhas, colunas);
    cout<< " A soma das duas matrizes são: " << resultado << endl;
    return 0;
 }

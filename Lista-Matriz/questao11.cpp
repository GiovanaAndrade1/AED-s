/*Faça uma função que receba uma matriz de números inteiros e verifique se ela possui algum elemento repetido.
 A função deve retornar verdadeiro caso haja repetição e falso caso contrário*/

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
int Repeticao(int **matriz, int linhas, int colunas){
    bool encontrou= false;
    for (int l = 0 ; l < linhas ; l++){
        for (int c = 0 ; c < colunas ; c++ ){
            for (int l2 = 0 ; l2 <linhas ; l2 ++){
                for (int c2 = 0 ; c2 < colunas ; c2++){
                    if (l == l2  && c == c2) continue;
                     if (matriz[l][c] == matriz[l2][c2]){
                     encontrou = true;
                     return true;

                     }

                }
            }
        }
    }
    return false;
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
    resultado = Repeticao(matriz, linhas, colunas);
    if (Repeticao(matriz, linhas, colunas) == true ){
        cout << " Possui repetição!"<< endl; 

    }
    else {
        cout << " nao possui repeticao"<< endl;
    }



    return 0;
}
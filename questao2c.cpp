#include <iostream> 
using namespace std;
#include <string>


void  PreencherDados(int **matriz){
    cout <<  "Informe os valores dentro da matriz" << endl; 
    for (int l = 0 ; l < 3 ; l ++){
        for (int c = 0 ; c < 3 ; c ++){
            cout << "matriz: [" << l << "][ "<< c << "]: ";
            cin >> matriz[l][c];
        }
    }
}

void Verificacao(int **matriz, int aux){
    for (int l = 0 ; l < 3 ; l ++){
        for (int c = 0 ; c < 3 ; c ++){
            if ( matriz[l][c] == aux){
                matriz[l][c] = 0;
            }
        }
    }
    int maiorqnt = 0;
    int colunamaior = 0;
for( int c = 0 ; c < 3 ; c ++){
    int cont = 0;
    for (int l = 0; l < 3 ; l ++){
        if (matriz[l][c] == 0){
            cont ++;
        }
    }

    if (cont > maiorqnt){
    maiorqnt = cont;
    colunamaior = c;
}
}

cout << " A coluna que recebe mais o numero auxiliar é " << colunamaior << "com " << maiorqnt << endl;
}

int main(){
    int aux;
     int **matriz;
    matriz = new int*[3];
    for (int i = 0; i < 3 ; i ++ ){
        matriz[i] = new int[3];
    }

    cout << " Informe um numero para verificar" << endl;
    cin >> aux;
    PreencherDados(matriz);
    Verificacao(matriz, aux);

    

}
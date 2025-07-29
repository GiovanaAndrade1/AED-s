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


int Somatorio(int **matriz){
   int somatorio = 0; 
    for (int l = 0 ; l < 3 ; l++){
        for (int c = 0 ; c < 3 ; c ++){
            if ( l > c){
                somatorio = somatorio + matriz[l][c];
            }
        }
    }

    for (int l = 0 ; l < 3 ; l++){
        for (int c = 0 ; c < 3 ; c ++){
            if ( l <= c){
                matriz[l][c] = 0; 
            }
        }
    }
     for (int l = 0 ; l < 3 ; l++){
        for (int c = 0 ; c < 3 ; c ++){
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }

    return somatorio; 

    
}

int main(){
    int **matriz;
    matriz = new int*[3];
    for (int i = 0; i < 3 ; i ++ ){
        matriz[i] = new int[3];
    }
    PreencherDados(matriz);
    int resultado = Somatorio(matriz);

    cout << "O somatorio do triangulo inferior é "  << resultado << endl;
    return 0;
}
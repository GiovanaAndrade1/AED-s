#include <iostream> 
using namespace std;
#include <string>

void  PreencherDados(int **matriz, int ** matriz1){
    cout <<  "Informe os valores dentro da matriz" << endl; 
    for (int l = 0 ; l < 3 ; l ++){
        for (int c = 0 ; c < 3 ; c ++){
            cout << "matriz: [" << l << "][ "<< c << "]: ";
            cin >> matriz[l][c];
        }
    }

    cout <<  "Informe os valores dentro da matriz 2" << endl; 
    for (int l = 0 ; l < 3 ; l ++){
        for (int c = 0 ; c < 3 ; c ++){
            cout << "matriz: [" << l << "][ "<< c << "]: ";
            cin >> matriz1[l][c];
        }
    }
}

void Somatorio(int **matriz, int **matriz1){
    int somatorio = 0;
    int somatorio1 = 0; 
    for (int l = 0 ; l < 3 ; l ++){
        for (int c = 0 ; c < 3 ; c ++){
            if(l == 0 && c == 1) continue; 
            somatorio = somatorio + matriz[l][c];
        }
    }
    cout << somatorio << endl;
    for (int l = 0 ; l < 3 ; l ++){
        for (int c = 0 ; c < 3 ; c ++){
            if(l == 0 && c == 1) continue; 
            somatorio1 = somatorio1 + matriz1[l][c];

            
           
        }
    }
    cout << somatorio1 << endl;

    if (somatorio > somatorio1 ){
    cout << "Somatorio 1 é maior que o somatorio 2" << endl;
    }
    else { 
        cout << " Somatorio 2 é maior que somatorio 1"<< endl;
    }

}
int main(){
    int **matriz;
    matriz = new int*[3];
    for (int i = 0; i < 3 ; i ++ ){
        matriz[i] = new int[3];
    }
    int **matriz1;
    matriz1 = new int*[3];
    for (int i = 0; i < 3 ; i ++ ){
        matriz1[i] = new int[3];
    }
    PreencherDados(matriz, matriz1);
    Somatorio(matriz, matriz1);

    return 0;

}
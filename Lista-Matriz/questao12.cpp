/*Faça uma função que receba uma matriz de caracteres representando um jogo da velha (Tic-Tac-Toe) e verifique se há um vencedor.
 A matriz deve ser uma matriz 3x3, e a função deve retornar o caractere do vencedor ('X' ou 'O') ou um caractere de empate ('-').*/

 #include <iostream>
 using namespace std;

 int main(){
    int **matriz
    cout << " -----------------Bem vindo -----------------" << "\t";
    cout << "Vamos jogar um jogo da velha! escolha seu oponente"<< endl;
    matriz = new int*[3]
    for (int i = 0 ; i < 3 ; i ++){
        matriz[i] = new int*[3]
    }
    int matriz[3][3] = {
        {1, 2, 3 },
        {4, 5, 6 },
        {7, 8, 9 }
    };

    return 0;
 }
#include <iostream>
#include <math.h>
using namespace std;

int custo(char cod, float valor, int qnt){

    float Novovalor = 0, custoArm; 

    switch (cod){

        case ('A'):
            cout << "Qual é o custo de armazenamento?" << endl;
            cin >> custoArm;
            Novovalor = custoArm * valor * qnt;
            break;

        case ('B'): 
            Novovalor = valor * qnt;
            break;

        case ('C'):
            Novovalor = valor * qnt;
            break;

        default: 
            cout << "abacaxi" << endl;
            break;
    }
    return Novovalor;
     
}


int main(){
    char cod; 
    float valor = 0, Valor = 0;
    int qnt = 0;
    cout << "Informe o codigo da peca, o valor unitario e a quantidade" << endl;
    cin >> cod >> valor >> qnt;
    Valor = custo(cod, valor, qnt);
    cout << " O valor total a ser pago será: R$" << Valor;
    return 0;
}
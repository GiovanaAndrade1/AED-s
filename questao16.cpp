/*16. Escreva um algoritmo em C++ que leia um conjunto de 50 fichas de funcionários de uma empresa e armazene-as em vetores. 
Cada ficha deve conter o nome, o salário e o código do setor (um número de 1 a 5).
 O algoritmo deve calcular e imprimir:
    1. O maior e o menor salário da empresa.
    2. A média salarial de cada setor.
    3. Os funcionários com salários abaixo da média salarial da empresa.*/

#include <string>
#include <iostream> 
using namespace std;
int setorD;

int leituraDados(string *nome, float *salario, int *cod){
    int codigo = 0;
    for (int i = 0 ; i < 5 ; i ++){
        cout << "Informe o nome da "<< i + 1 << "Ficha: "<< endl;
        cin >> nome[i];
        cout << " Informe o salario da "<< i + 1 << "Ficha: " << endl;
        cin >> salario[i];
        cout << " Informe o código da "<< i+ 1 << "ficha: " << endl;
        cin >> codigo;
        while ( codigo < 1 || codigo > 5){
            cout << " tente de novo,  numero de 1 a 5 "<< endl;
            cin >> codigo;
        }
        cod[i] = codigo;

        }
        return 0;
}

float maiorSalario(float *salario ){
    float maiorsalario = salario[0];

    for (int i = 0 ; i < 5 ; i ++){
        if (salario[i] > maiorsalario){
            maiorsalario = salario[i];
        }
    }
    return maiorsalario; 
}

float menorSalario(float *salario){
    float menorsalario = salario[0];

    for (int i = 0 ; i < 5 ; i++){
        if (salario[i] < menorsalario){
            menorsalario = salario[i];
        }
    }
    return menorsalario;
}

float mediasetor(int *cod, float *salario){
    int cont = 0;
    float soma = 0;

    cout << "Informe o setor para calcular a média: ";
    cin >> setorD;

    for (int i = 0; i < 5; i++) {
        if (cod[i] == setorD) {
            soma += salario[i];
            cont++;
        }
    }

    if (cont == 0) {
        cout << "Não possui fichas nesse setor!" << endl;
        return 0;
    }

    float resultado = soma / cont;
    return resultado;
}

   float mediasalarial(float *salario, string *nome){
    float soma = 0;
    for (int i = 0 ; i < 5 ; i++) {
        soma += salario[i];
    }

    float media = soma / 5;
    bool encontrou = false;

    for (int i = 0 ; i < 5 ; i++) {
        if (salario[i] < media) {
            cout << "O funcionário: " << nome[i] << " está abaixo da média!" << endl;
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Não há funcionário com salário abaixo da média." << endl;
    }

    return 0;
}

    void imprimirvalores(float maiorsalario, float menorsalario, float media ){
        cout << " O maior salário é " << maiorsalario << endl;
        cout << " O menor salário é " << menorsalario << endl;
        cout << " a media do setor"<< setorD << "é" << media << endl;


    }


    int main(){
        string *nome = new string[5];
        float *salario = new float[5];
        int *cod = new int[5];
        leituraDados(nome, salario, cod);
        float maiorsalario = maiorSalario(salario);
        float menorsalario = menorSalario(salario);
        float media = mediasetor(cod, salario);
        mediasalarial(salario, nome);
        imprimirvalores(maiorsalario, menorsalario, media);




        

        return 0;
    }
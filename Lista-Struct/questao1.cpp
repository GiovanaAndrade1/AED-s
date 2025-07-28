/*Crie uma struct chamada "Pessoa" que armazene os seguintes dados:
 nome (string), idade (int) e altura (float). Crie uma função para preencher os dados 
 de uma pessoa e outra função para exibir esses dados.*/

 #include <iostream>
using namespace std;
#include <string>

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

void PreencherDados(Pessoa &p) {
    cout << "Informe o nome da pessoa, idade e altura: " << endl;
    cin >> p.nome >> p.idade >> p.altura;
}

void ImprimirDados(Pessoa &p) {
    cout << "O nome da pessoa é: " << p.nome << endl;
    cout << "A idade dela é: " << p.idade << endl;
    cout << "Sua altura é: " << p.altura << endl;
}

int main() {
    Pessoa p;
    PreencherDados(p);
    ImprimirDados(p);

    return 0;
}

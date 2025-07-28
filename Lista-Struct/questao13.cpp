/* Crie uma struct chamada "Agenda" que armazene um array de structs "Contato". 
Cada contato deve ter um nome (string) e um número de telefone (string). 
Adicione métodos para adicionar novos contatos, excluir contatos existentes e exibir todos os contatos da agenda.*/

#include <iostream>
#include <string>
using namespace std;


struct Contato{
    string nome;
    string teleco;
};

struct Agenda {
    Contato *contatos;
    int total;
    int capacidade;

    Agenda(){
        capacidade = 5;
        total = 0;
        contatos = new Contato[capacidade];
    }

    void redimencionar(){
        capacidade = capacidade * 2;
        Contato *novoarray = new Contato[capacidade];
        for (int i = 0 ; i < total ; i ++){
             novoarray[i] = contatos[i];
        }
        delete[] contatos; 
        contatos = novoarray;
    }

    void Adicionar(string &nome, string &teleco){
        if ( total == capacidade){
            redimencionar();
        }

        contatos[total].nome = nome;
        contatos[total].teleco = teleco;
        total = total + 1;

        cout <<" Adicionado com Sucesso!" <<endl;
    }


    void Remover(string &nome){
        bool encontrado = false;
        for (int i = 0 ; i < total ; i ++){
            if ( contatos[i].nome == nome ){
                    for (int j = i ; j < total - 1 ; j ++){
                        contatos[j] = contatos[ j + 1];
                    }
            total = total - 1;
            encontrado = true; 
            cout << " Contato excluido" << endl;
            break;
            }
        }
        if (!encontrado){
            cout << " nao existe esse contato" << endl;
        }


    }

    void Exibir(){
        if (total == 0 ){
            cout << " Agenda vazia" << endl;
        }
        else {
             cout << "\n----- Contatos da agenda ----- \n" << endl; 
            for (int i = 0; i < total  ; i ++){
                cout << " Nome: " << contatos[i].nome << endl;
                cout << " Telefone " << contatos[i].teleco << endl;
            }

        }

    }

};

int main(){
    Agenda a;
    char opcao; 
    string nome, teleco;
    do {
        cout << "\n (A) Adicionar -- (E) Excluir -- (V) Visualizar Agenda -- (S) Sair \n" << endl;
        cin >> opcao;
        cin.ignore();

        switch (toupper(opcao)){
            case 'A': 
            cout << " Nome do contato" << endl; 
            getline(cin,nome);
            cout << " Telefone do contato" << endl;
            getline(cin,teleco); 
            a.Adicionar(nome, teleco);
            break;

            case 'E':

            cout << " Nome do contato a excluir" << endl;
            getline(cin, nome);
            a.Remover(nome); 
            break;


            case 'V': 
            a.Exibir();
            break;


            case 'S':

            cout << " Encerrando o programa.." << endl;
            break;


            default: 

            cout << " Opcao invalida" << endl;
            break;

        } 
    } while ( opcao != 'S' && opcao != 's');

   
return 0;

}